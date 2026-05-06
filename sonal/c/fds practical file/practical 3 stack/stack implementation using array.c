//sonal jamliya
//23100BTAIMLM14566
#include<stdio.h>
#include<stdlib.h>
#define MAX 6
//defining MAX value that can be inserted is 6 as global
// Declaring different functions to perform operations
int st[MAX], top=-1;
void push(int st[],int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
//make a menu to choose which function to be performed
int main(int argc, char*argv[])
{
	int val, option;
	do
	{
		printf("\n ******main menu******");
		printf("\n 1.push");
		printf("\n 2.pop");
		printf("\n 3.peek");
		printf("\n 4.display");
		printf("\n 5.exit");
		printf("\n enter your option:");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("\n enter the number to be pushed on stack:");
				scanf("%d",&val);
				push(st,val);
				break;
			case 2:
			    val=pop(st);
				if(val!=-1)
				printf("the value deleted from stack is:%d",val);
				break;
			case 3:
			    val=pop(st);
				if(val!=-1);
			    printf("the value stored at top stack is:%d",val);
				break;
			case 4:
			   	display(st);
				break;	
		}
	}while(option !=5);
	return 0;
}
//function to insert a value
void push(int st[],int val)
{
	if(top==MAX-1)
	{
		printf("\n stack overflow");
	}
	else
	{
		top++;
		st[top]=val;
	}
}
//function to pop a value
int pop(int st[])
{
	int val;
	if(top==-1)
	{
		printf("\n stack overflow");
		return -1;
	}
	else
	{
		val=st[top];
		top--;
		return val;
	}
}
//function to display
void display(int st[])
{
	int i;
	if(top==-1)
	{
		printf("\n stack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		printf("\n %d",st[i]);
		printf("\n");
	}
}
//function to show the top most value
int peek(int st[])
{
	if(top==-1)
	{
		printf("\n stack is empty");
		return-1;
	}
	else
	return(st[top]);
 }
