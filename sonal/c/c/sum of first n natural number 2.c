#include<stdio.h>
void main()
{
	int i,n,sum;
	printf("enter the reach of n");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	sum+=i;
    	printf("sum=%d",i);
	}
}
