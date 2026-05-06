//#include<iostream>
//using namespace std;
//int checkNeon(int x)
//{
//    // Storing the square of x
//    int sq = x * x;
// 
//    // Calculating the sum of 
//    // digits of sq
//    int sum_digits = 0;
//    while (sq != 0) 
//    {
//        sum_digits = sum_digits + sq % 10;
//        sq = sq / 10;
//    }
//    return (sum_digits == x);
//}
//int main()
//{
//	int x;
//	cout<<"enter the number:";
//	cin>>x;
//	// Printing Neon Numbers upto 10000
//    for (int i = 1; i <= 10000; i++) 
//        if (checkNeon(i))
//            cout << i << " ";   
//}
#include <iostream>
using namespace std;

// Function to find sum of digits of a number
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; // Add last digit to sum
        n /= 10; // Remove last digit
    }
    return sum;
}

// Function to check if a number is a neon number
bool isNeon(int n) {
    int square = n * n; // Find square of the number
    int sum = sumOfDigits(square); // Find sum of digits of the square
    return sum == n; // Check if sum of digits equals the original number
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isNeon(num)) {
        cout << num << " is a Neon Number." << endl;
    } else {
        cout << num << " is not a Neon Number." << endl;
    }

    return 0;
}


