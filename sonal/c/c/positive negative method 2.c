#include<stdio.h>
void main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	
	if(num==0)
	{
		printf("%d is zero",num);
	}
	else(num>0)?  printf("positive"):printf("negative");
}
