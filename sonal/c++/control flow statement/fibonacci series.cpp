#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask user for the number of terms in the Fibonacci series
    cout << "Enter the number of terms: ";
    cin >> n;
    
    long long int first = 0, second = 1, next;

    cout << "Fibonacci Series: " << first << ", " << second;

    for (int i = 3; i <= n; i++) {
        next = first + second;
        cout << ", " << next;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}

