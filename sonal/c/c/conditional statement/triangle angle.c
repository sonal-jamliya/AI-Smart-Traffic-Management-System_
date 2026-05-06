#include<stdio.h>
void main()
{
	float a,b,c,angle;
	printf("enter the angles:");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a+b+c==180)
	{
		printf("\nthe triangle is valid");
    }
		if(a+b+c<=90)
		{
			printf("\nthe triangle is acute");
		}
		if(a+b+c>=90)
		{
			printf("\nthe triangle is obtuse");
		}
	
	else
	{
		printf("the triangle is not valid");
	}
}
