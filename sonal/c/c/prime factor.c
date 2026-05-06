#include<stdio.h>
void primefactor(int num)
{
	int i;
	printf("prime factor of the number ");
	for(i=2;num>1;i++)
	{
		while(num%i==0)
		{
			printf("\t%d",i);
			num=num/i;
		}
	}
}
void main()
{
 int num;
 printf("enter the number ");
 scanf("%d",&num);
 primefactor(num);
 
}
