from flask import Flask, render_template, request, Response
import os
import cv2
from ultralytics import YOLO
from detector import detect_vehicles
from traffic_logic import calculate_signal_time

app = Flask(__name__)
UPLOAD_FOLDER = "uploads"
app.config["UPLOAD_FOLDER"] = UPLOAD_FOLDER
os.makedirs(UPLOAD_FOLDER, exist_ok=True)

# Load YOLO model globally so it's ready for all streams
model = YOLO("yolov8n.pt")

@app.route('/')
def login():
    return render_template('login.html')

@app.route('/dashboard')
def dashboard():
    return render_template('dashboard.html')

@app.route('/upload')
def upload():
    return render_template('upload.html')

@app.route('/process', methods=['POST'])
def process():
    file = request.files['video']
    filepath = os.path.join(app.config["UPLOAD_FOLDER"], file.filename)
    file.save(filepath)

    count = detect_vehicles(filepath)
    signal = calculate_signal_time(count)

    return render_template('dashboard.html', count=count, signal=signal)

@app.route('/process_lanes', methods=['POST'])
def process_lanes():
    """Handles the 4 lane uploads, saves them with standard names, and opens live dashboard."""
    for i in range(1, 5):
        file = request.files.get(f'lane{i}')
        if file and file.filename:
            # Save files as lane1.mp4, lane2.mp4, etc. for easy streaming
            filepath = os.path.join(app.config["UPLOAD_FOLDER"], f"lane{i}.mp4")
            file.save(filepath)
            
    return render_template('live.html')

def generate_frames(lane_id):
    """Generator function to stream video with YOLOv8 inference applied."""
    filepath = os.path.join(UPLOAD_FOLDER, f"lane{lane_id}.mp4")
    
    # Fallback to 'traffic.mp4' if the user didn't upload 4 videos
    if not os.path.exists(filepath):
        filepath = os.path.join(UPLOAD_FOLDER, "traffic.mp4")
        
    cap = cv2.VideoCapture(filepath)
    
    while cap.isOpened():
        success, frame = cap.read()
        if not success:
            # Restart video if it finishes
            cap.set(cv2.CAP_PROP_POS_FRAMES, 0)
            continue
            
        # Resize frame to save processing power on 4 simultaneous feeds
        frame = cv2.resize(frame, (480, 320))
        
        # Run YOLOv8 specifically looking for vehicles (classes 2,3,5,7 usually)
        results = model(frame, verbose=False)
        annotated_frame = results[0].plot()
        
        # Encode as JPEG
        ret, buffer = cv2.imencode('.jpg', annotated_frame)
        if not ret:
            continue
            
        frame_bytes = buffer.tobytes()
        
        # Yield the multipart stream payload
        yield (b'--frame\r\n'
               b'Content-Type: image/jpeg\r\n\r\n' + frame_bytes + b'\r\n')

@app.route('/video_feed/<int:lane_id>')
def video_feed(lane_id):
    """Route returning the multipart video stream for a specific lane."""
    return Response(generate_frames(lane_id), mimetype='multipart/x-mixed-replace; boundary=frame')

if __name__ == "__main__":
    app.run(debug=True)