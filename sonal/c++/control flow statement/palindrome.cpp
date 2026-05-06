//to find whether the number is palindrome
#include<iostream>
using namespace std;
int main(){
	int n,t,rev=0;
	cout<<"enter the number:";
	cin>>n;
	t=n;
	
	while(t>0){
		int dig = t%10;
		rev=rev*10+dig;
		t /=10;
	}
	
	if(n==rev)
	{
		cout<<"the given number " << n << " is palindrome ";
	}
	else{
		cout<<"the given number " << n << " is not palindrome ";
	}
}
