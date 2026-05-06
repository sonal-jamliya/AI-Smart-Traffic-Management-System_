

#include<iostream>
using namespace std;

int main(){
	int n,temp,p=0;
	cout<<"enter the number:";
	cin>>n;
	temp=n;
	
	while(n>0){
		int r = n%10;
		p=(p)+(r*r*r);
		n=n/10;
	}
	
	if(temp==p){
		cout<<"the given number is amstrong number"<<endl;
	}
	else{
		cout<<"the given number is not a amstrong number"<<endl;
	}
}
