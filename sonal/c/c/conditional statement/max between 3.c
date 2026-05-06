#include<stdio.h>
void main()
{
	int a,b,c,max;
	printf("enter the three number:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
			max=a;
		}
	}
	if(b>c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	printf("max=%d",max);
}
