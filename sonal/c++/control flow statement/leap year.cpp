#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter year:";
	cin>>year;
	if(year%4==0)
	{
		cout<<"the year is leap year";
	}
	else
	cout<<"the year is not a leap year";
}
