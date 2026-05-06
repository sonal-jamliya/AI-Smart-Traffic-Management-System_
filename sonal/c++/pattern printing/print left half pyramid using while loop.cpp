#include<iostream>
using namespace std;
int main(){
	int i=0,j=0,sp=0,row;
	cout<<"enter the number of rows :";
	cin>>row;
	   
	while(i<row){
		while(sp<(row-i-1)){
			cout<<" ";
			sp++;
		}
	sp=0;
	while(j<=i){
		cout<<"* ";
		j++;
	}
	j=0;
	i++;
	cout<<endl;
	}
     return 0;
	
}
