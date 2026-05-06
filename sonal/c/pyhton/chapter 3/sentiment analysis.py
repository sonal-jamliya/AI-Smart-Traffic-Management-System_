# Sentiment Analysis using TF-IDF and Naive Bayes

# Step 1: Import Libraries
from sklearn.model_selection import train_test_split
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.naive_bayes import MultinomialNB
from sklearn.metrics import accuracy_score, confusion_matrix, classification_report

# Step 2: Sample Dataset (you can replace it with a CSV file later)
texts = [
    "I love this product!",
    "This is the worst movie I have ever seen.",
    "Absolutely fantastic experience.",
    "I hate this thing.",
    "Not bad, but could be better.",
    "The food was delicious and the service was great.",
    "I am disappointed with the quality.",
    "It was okay, nothing special.",
    "Totally worth the money!",
    "Terrible customer support!"
]

labels = [
    "positive",
    "negative",
    "positive",
    "negative",
    "neutral",
    "positive",
    "negative",
    "neutral",
    "positive",
    "negative"
]

# Step 3: Split Dataset into Train and Test
X_train, X_test, y_train, y_test = train_test_split(texts, labels, test_size=0.3, random_state=42)

# Step 4: Convert Text to Numeric Features
vectorizer = TfidfVectorizer(stop_words='english')
X_train_vec = vectorizer.fit_transform(X_train)
X_test_vec = vectorizer.transform(X_test)

# Step 5: Train Naive Bayes Model
model = MultinomialNB()
model.fit(X_train_vec, y_train)

# Step 6: Make Predictions
y_pred = model.predict(X_test_vec)

# Step 7: Evaluate Model
print("🎯 Accuracy:", accuracy_score(y_test, y_pred))
print("\n🔍 Classification Report:\n", classification_report(y_test, y_pred))
print("\n🧩 Confusion Matrix:\n", confusion_matrix(y_test, y_pred))

# Step 8: Test with Custom Sentences
print("\n--- Test on New Sentences ---")
new_texts = [
    "I really enjoyed this movie!",
    "The product quality is terrible.",
    "It was just okay.",
    "I love how easy it is to use."
]
new_vec = vectorizer.transform(new_texts)
predictions = model.predict(new_vec)

for text, sentiment in zip(new_texts, predictions):
    print(f"{text} → {sentiment}")
