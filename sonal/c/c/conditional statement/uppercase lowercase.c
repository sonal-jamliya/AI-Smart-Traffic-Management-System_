#include<stdio.h>
void main()
{
	char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    if(ch>='a' && ch<='z')
    {
    	printf("The character given is in lower case");
	}
	if(ch>='A'&&ch<='Z')
	{
		printf("the character given is in uppercase");
	}
	
}
