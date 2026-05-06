//SARTHAK GUPTA
//23100BTAIMLM14562
#include<stdio.h>
void main()
{
	//declaration
	int i, n,sum,arr[40];
	float average;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the element :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the elements are as follow \n:");
	for(i=0;i<n;i++)
	{
		printf("%d=%d \n",i,arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	average=sum/2;
	printf("average of the given element is %f",average);
}
