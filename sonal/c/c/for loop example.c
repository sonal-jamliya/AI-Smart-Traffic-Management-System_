#include<stdio.h>
void main()
{
	int n,i;
	printf("enter the loop limit:");
	scanf("%d",&n);
	for(i=n;i<=10;i++)
	{
		printf("\n %d",i*n);
	}
}
