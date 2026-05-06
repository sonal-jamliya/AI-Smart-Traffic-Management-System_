#include<iostream>
using namespace std;

bool isprime(int n){
	if(n<=1)
	return false;
	
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
		return true;
	}
	return true;
}

bool ispossible(int n){
	
	if(isprime(n)&&isprime(n-2))
	return true;
	else
	return false;
}

int main(){
	int n;
	cout<<"enter n:";
	cin>>n;
	if(ispossible(n))
	  cout<<"yes";
	else
	cout<<"no";
	return 0;
}

