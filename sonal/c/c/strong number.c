#include <stdio.h>

// function to calculate factorial
int getFactorial(int n){
    int fact = 1;
    int i;
    for(i = 1; i <= n; i++)
            fact = fact * i;
    
    return fact;
}

int checkStrong(int num){
    
    int digit, sum = 0;
    int temp = num;
    while(temp!=0){
        digit = temp % 10;
        
        sum = sum + getFactorial(digit);
        temp /= 10;
    }
    
    // returns 1 if both equal else 0
    return sum == num;
    
}
int main ()
{
	int num;
    printf("enter the number");
    scanf("%d",&num);
    
    if(checkStrong(num))
        printf("%d is Strong Number", num);
    else
        printf("%d is Not Strong Number", num);

}
