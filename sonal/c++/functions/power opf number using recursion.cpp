#include <iostream>
using namespace std;

// Function to calculate power recursively
int power(int base, int exponent) {
    // Base case: when exponent is 0, return 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: base * power(base, exponent - 1)
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    // Input base and exponent
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    // Call power function and display the result
    int result = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}

