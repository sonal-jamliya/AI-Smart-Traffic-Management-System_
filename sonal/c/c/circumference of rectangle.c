#include<stdio.h>
void main()
{
	int l,b,c;
	printf("enter the length and breadth of rectangle ");
	scanf("%d%d",&l,&b,&c);
	c=2*(l+b);
	printf("the circumference of the rectangle is :%d",c);
}
