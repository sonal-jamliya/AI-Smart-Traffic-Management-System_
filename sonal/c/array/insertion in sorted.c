#include<stdio.h>
void main()
{
	int i,n,j,num,arr[10];
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
	printf("enter the element to be inserted:");
	scanf("%d",&num);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>num)
		{
			for(j=n-1;j>=i;j--)
			arr[j+1]=arr[j];
			arr[i]=num;
			break;
		}
	}
	n=n+1;
	printf("\n the array after insertion of %d is:",num);
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]=%d",i,arr[i]);
	}
}
