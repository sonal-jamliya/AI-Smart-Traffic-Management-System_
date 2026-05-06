#include<stdio.h>
void main()
{
	int i,n,arr[20];
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the element of array:");
	for(i=0;i<=n;i++)
	{
	scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    	printf("arr[%d]=%d \n",i,arr[i]);
	}
	
}
