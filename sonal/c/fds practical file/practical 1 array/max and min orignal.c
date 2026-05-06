//Sarthak gupta
//23100BTAIMLM14562
#include<stdio.h>
void main()
{
	int i, n, arr[40];
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
	findMinMax(arr, n);
}
//function to find maximum and minimum
void findMinMax(int arr[], int n)
{
	 int i;
    int min = arr[0];
    int max = arr[0];
    // Traverse array elements
    for (i=1;i<n;i++) 
	{
        if (arr[i] < min)
		{
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
    }
   }
    // Print minimum and maximum elements
    printf("\nmin-%d max-%d\n", min, max);
}


