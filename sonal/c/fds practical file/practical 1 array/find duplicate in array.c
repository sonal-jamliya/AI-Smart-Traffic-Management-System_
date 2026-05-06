//SONAL JAMLIYA
//23100BTAIMLM14566
#include <stdio.h>
int main()
{
	//declartion
    int arr[100];  
    int n, mm = 1, ctr = 0;   
    int i, j;  
    //taking input from user
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    //loop initialization
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);  
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr++; 
                break;  
			}
        }
    }
    printf("Total number of duplicate elements found in the array: %d\n", ctr);
    return 0;  
}

