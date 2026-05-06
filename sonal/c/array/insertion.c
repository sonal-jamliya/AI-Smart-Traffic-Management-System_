#include<stdio.h>
void main()
{
	int i,n,pos,num,arr[20];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the element of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	printf("enter the number to be inserted:\n");
	scanf("%d",&num);
	printf(" enter the position at which the number has to be inserted:\n");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
	   arr[i+1]=arr[i];
	arr[pos]=num;
	n=n+1;
}
	printf("\n the array element after insertion are");
		for(i=0;i<n;i++)
		{
		 	printf("arr[%d]=%d\n",i,arr[i]);
		 }
}
