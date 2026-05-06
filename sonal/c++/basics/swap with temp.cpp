#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the number a:";
	cin>>a;
	cout<<"enter the number b:";
	cin>>b;
	cout<<"before swapping a:"<<a<<",b:"<<b;
	cout<<endl;
	
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping a:"<<a<<",b:"<<b;
}
