//Sonal jamliya
//23100BTAIMLM14566
#include<stdio.h>
// Main function to run the program
int main() 
{ 
    int i,j,n,arr[40];
    printf("\n enter the size of array:");
    scanf("%d",&n);
    printf("\n enter the elements in array\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	printf("\n the elements are as follow:");
	for(i=0;i<n;i++)
	{
		printf("\n%d=%d",i,arr[i]);
	}

    int visited[n];
 
    for(i=0; i<n; i++)
	{

       if(visited[i]==0){
          int count = 1;
          for(j=i+1; j<n; j++){
             if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
             }
          }

          printf("\n%d occurs %d times\n", arr[i], count);
       }
   }

   return 0; 
}
