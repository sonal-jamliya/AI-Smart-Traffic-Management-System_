#include<stdio.h>
void main()
{
	int a,b,c,sum;
	float average;
	printf("enter the value of a,b,c ");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	average=sum/2;
	printf("\nthe sum is %d",sum);
	printf("\nthe average is %f",average);
}
