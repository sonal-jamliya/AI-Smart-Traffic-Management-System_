#include<iostream>
using namespace std;

bool isprime(int num){
	if(num<=1) return false;
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int start,end;
	cout<<"enter the start number:";
	cin>>start;
	cout<<"enter the end number :";
	cin>>end;
	cout<<"prime number between"<<start<<" and "<<end<<" is:";
	cout<<endl;
	
	for(int i=start; i<=end; i++){
		if(isprime(i)){
			cout<< i <<" ";
		}
	}
	cout<<endl;
	return 0;
}
