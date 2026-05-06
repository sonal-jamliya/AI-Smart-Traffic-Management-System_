//#include<iostream>
//using namespace std;
//int main(){
//	int i,j,n;
//	cout<<"enter the number:";
//	cin>>n;
//	
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i-1;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"enter the number:";
	cin>>n;
		for(i=n;i>=1;i--){
		for(j=i;j>=1;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
	
