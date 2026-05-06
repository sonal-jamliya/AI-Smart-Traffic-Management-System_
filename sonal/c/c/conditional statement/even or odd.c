#include<stdio.h>
void main()
{
	int n;
	printf("enter the number to be divided ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("the number %d is even",n);
	}
	else
	{
		printf("the number is odd");
	}
}

