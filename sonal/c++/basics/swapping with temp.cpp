#include<iostream>
using namespace std;
int main()
{
	int a=2,b=4,temp;
	cout<<"before swapping a:"<<a<<",b:"<<b;
	cout<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping a:"<<a<<",b:"<<b;
}
