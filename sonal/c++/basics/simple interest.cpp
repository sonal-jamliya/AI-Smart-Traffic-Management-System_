#include<iostream>
using namespace std;
int main(){
	float p,t,r,si;
	cout<<"enter the principle amount:";
	cin>>p;
	cout<<"enter the time:";
	cin>>t;
	cout<<"enter the  rate:";
	cin>>r;
	
	si=p*t*r/100;
	
	cout<<"the simple interest is:"<<si;
	
}
