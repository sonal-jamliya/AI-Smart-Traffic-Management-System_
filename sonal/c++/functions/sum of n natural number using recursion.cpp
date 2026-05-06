#include <iostream>
using namespace std;

int recursum(int n){
	if(n<=1){
	return n;
    }
	else
	return n+recursum(n-1);
}
int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive number." << endl;
    } else {
        cout << "The sum of first " << n << " natural numbers is: " 
             << recursum(n) << endl;
    }

    return 0;
}


