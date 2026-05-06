#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"enter the number till which you want the sum:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<" the sum of first "<< n <<" natural number is:"<<sum;
}
