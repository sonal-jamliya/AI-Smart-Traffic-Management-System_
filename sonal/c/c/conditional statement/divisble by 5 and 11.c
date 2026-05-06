#include<stdio.h>
void main()
{
	int n;
	printf("enter the number to be divided ");
	scanf("%d",&n);
	if(n%5==0 && n%11==0)
	{
		printf("the number %d is divided by both 5 and 11",n);
	}
	else
	{
		printf("the number is not divisible by 5 and 11");
	}
}

