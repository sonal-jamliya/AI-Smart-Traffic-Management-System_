score = int(input("Enter your marks: "))

if score >= 90:
    grade = "A"

if score < 90:
    if score >= 80:
        grade = "B"
    
    if score < 80:
        if score >= 70:
            grade = "C"
        
        if score < 70:
            if score >= 60:
                grade = "D"
            
            if score < 60:
                if score >= 50:
                    grade = "E"

                if score < 50:
                    grade = "E"


print(f"Your grade is: {grade}")
