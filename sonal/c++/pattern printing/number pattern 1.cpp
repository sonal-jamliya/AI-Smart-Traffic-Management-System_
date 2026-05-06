#include<iostream>
using namespace std;
int main (){
	int r,c,number=1,n;
	cout<<"enter the number:";
	cin>>n;
	
	for(r=0;r<=n;r++){
		for(c=0;c<r;c++){
			cout<< number <<" ";
			number++;
		}
		cout<<endl;
	}
	return 0;
}
