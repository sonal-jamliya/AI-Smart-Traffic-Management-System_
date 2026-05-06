#include<stdio.h>
void main()
{
	int i,n1,n2,hcf=1;
	printf("enter the two number :");
	scanf("%d%d",&n1,&n2);
	for(i = 1; i <= n1 || i <= n2; i++) 
	{
        if(n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }
    printf("the hcf is:%d",hcf);
    
}

