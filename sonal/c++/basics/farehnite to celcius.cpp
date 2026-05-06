#include <iostream>
using namespace std;

float Conversion(float n)
{
	return (n - 32.0) * 5.0 / 9.0;
}


int main()
{
	float n;
	cout<<"enter the temperature to be converted:";
	cin>>n;
	cout << Conversion(n);
	return 0;
}

