// C++ Program to Check if a Number is Prime
//  using Square Root
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 24;

    int cnt = 0;

    // If number is less than/equal to 1,
    // it is not prime
    if (n <= 1)
        cout << n << " is NOT prime" << endl;
    else {

        // Check how many numbers divide n in
        // range 2 to sqrt(n)
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }

        // if cnt is greater than 0 then n is
        // not prime
        if (cnt > 0)
            cout << n << " is NOT prime" << endl;

        // else n is prime
        else
            cout << n << " is prime" << endl;
    }

    return 0;
}

