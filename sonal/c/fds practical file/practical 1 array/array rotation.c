//SARTHAK GUPTA
//23100BTAIMLM14562
#include <stdio.h>  
int main() 
{  
//declaration
    int i;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int rotations = 2;  
printf("Original Array: ");  
    for ( i = 0; i< n; i++) {  
printf("%d ", arr[i]);  
    }  
leftRotate(arr, n, rotations);  
printf("\nRotated Array: ");  
    for (i = 0; i< n; i++)   
    {  
printf("%d ", arr[i]);  
    }  
    return 0;  
}  
//function to rotate left
void leftRotate(int arr[], int n, int rotations)
 {
    int i,j;  
    int temp;  
    for ( i = 0; i< rotations; i++) {  
        temp = arr[0];  
        for (j = 0; j < n - 1; j++) {  
arr[j] = arr[j + 1];  
        }  
arr[n - 1] = temp;  
    }  
}  

