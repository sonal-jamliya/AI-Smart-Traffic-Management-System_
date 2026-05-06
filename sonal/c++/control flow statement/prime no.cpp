#include<iostream>
using namespace std;
int main(){
	int i,n;
	cout<<"enter the number:";
	cin>>n;
	
	int count=0;
	if(n<=1){
		cout<<n <<" is not a prime number";
	}
	else{
		for(i=2;i*i<=n;i++){
			if(n%i==0)
			count++;
		}
		
		if(cout > 0){
			cout<<" the number is prime";
		}
		else{
			cout<<" the number is not prime";
		}
	}
}
