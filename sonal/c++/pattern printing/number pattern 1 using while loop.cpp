
#include <iostream>
using namespace std;

int main(){
	int r=1,c=0,n,number=1;
	while(r<=n){
		while(c<=r-1){
			cout<<number<<" ";
			c++;
			number++;
		}
		c=0;
		r++;
		cout<<endl;
	}
	return 0;
}
