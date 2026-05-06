#include<iostream>
using namespace std;
int main(){
	int r=1,c=1,n,number=1;
	cout<<"enter the number:";
	cin>>n;
	
	while(r<=n){
		while(c<=r){
			cout<<c<<" ";
			c++;
		}
		c=1;
		r++;
		cout<<endl;
	}
	return 0;
}
