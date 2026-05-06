#include<stdio.h>
void main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are eligble for voting");
	}
	else
	{
		printf("you are not eligble for voting");
	}
}
