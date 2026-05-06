#include<stdio.h>
void main()
{
	int year;
	printf("enter the year  ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("the year %d is a leap year",year);
	}
	else
	{
		printf("it is not leap year ");
	}
}

