#include<iostream>
using namespace std;
int main(){
	int i,j,rows;
	cout<<"enter the number of rows :";
	cin>>rows;
	
	for(i=rows;i>0;i--){
		for(j=0;j<=rows;j++)
		{
			if(j>=i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
