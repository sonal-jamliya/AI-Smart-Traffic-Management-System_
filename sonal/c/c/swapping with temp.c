#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\nthe value of a is :%d",a);
	printf("\nthe value of b is :%d",b);
	
}
