#include<stdio.h>
void main()
{
	char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    if((ch>='a' && ch<='z')||(ch>='A'&&ch<='Z'))
    {
    	printf("The character given is alphabet");
	}
	if(ch>='0'&&ch<='9')
	{
		printf("the character given is digit");
	}
	else
	{
		printf("the character given is a special character ");
	}
}
