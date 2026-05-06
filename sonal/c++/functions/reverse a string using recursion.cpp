#include <iostream>
using namespace std;

// Function to print the reverse of a string using recursion
void reverseString(string str, int index) {
    // Base case: if the index reaches the end of the string
    if (index < 0) {
        return;
    }
    
    // Print the character at the current index
    cout << str[index];
    
    // Recursive call with the previous index
    reverseString(str, index - 1);
}

int main() {
    string str;
    
    cout << "Enter a string: ";
    cin >> str;
    
    cout << "Reversed string: ";
    reverseString(str, str.length() - 1);
    
    return 0;
}

