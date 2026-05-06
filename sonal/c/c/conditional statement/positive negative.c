#include<stdio.h>
void main()
{
	int a ;
	printf("enter the number:");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("a is a positive number");
	}
	if(a<0)
	{
		printf("a is negative number");
	}
	else
	{
		printf("a is a zero");
	}
}
