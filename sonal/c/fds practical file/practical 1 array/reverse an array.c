//SONAL JAMLIYA
//23100BTAIMLM14566
#include<stdio.h>  
void main()  
{  
    //declaration
    int n, arr[n], i;  
    printf("Enter the size of the array: ");  
    scanf("%d", &n);  
    printf("Enter the elements: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    printf("the elements are as follow \n:");
    //loop initialization
	for(i=0;i<n;i++)
	{
		printf("%d=%d \n",i,arr[i]);
	}
	int rev[n], j = 0; 
	//loop initialization 
    for(i=n-1;i>= 0;i--)  
    {  
        rev[j] = arr[i];  
        j++;  
    }  
    printf("The Reversed array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", rev[i]);  
    }  
} 
