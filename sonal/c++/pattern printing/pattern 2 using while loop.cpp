#include<iostream>
using namespace std;
int main (){
	int r=1,c=0,n;
	cout<<"enter the number:";
	cin>>n;
	while(r<=n){
		while(c<=r-1){
			cout<<r<<" ";
			c++;
		}
		c=0;
		r++;
		cout<<endl;
	}
	return 0;
}
