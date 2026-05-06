//sonal jamliya
//23100BTAIMLM14566
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
//creating a node
struct stack
{
	int data;
	struct stack*next;
};
// Declaring different functions to perform operations
struct stack *top=NULL;
struct stack *push(struct stack *,int);
struct stack *display(struct stack *);
struct stack *pop(struct stack *);
int peek(struct stack *);
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
				top=push(top,val);
				break;
			case 2:
				top=pop(top);
				break;
			case 3:
		         val=peek(top);
		         if(val !=-1)
		         printf("\n the value at the top of stack is:%d",val);
		         else
		         printf("\n stack is empty");
				break;
			case 4:
			   	top=display(top);
				break;	
		}
	}while(option !=5);
	return 0;
}
//function to push a value
struct stack*push(struct stack*top,int val)
{
	struct stack*ptr;
	ptr=(struct stack*)malloc(sizeof(struct stack));
	ptr->data=val;
	if(top=NULL)
	{
		ptr->next=NULL;
		top=ptr;
	}
	else
	{
		ptr->next=top;
		top=ptr;
	}
	return top;
}
//function to display
struct stack*display(struct stack*top)
{
	struct stack*ptr;
	ptr=top;
	if(top==NULL)
	{
		printf("\n stack is empty");
	}
	else
	{
		while(ptr !=NULL)
		{
			printf("\n %d",ptr->data);
			ptr=ptr->data;
		}
	}
}
//function to pop a value
struct stack*pop(struct stack*top)
{
	struct stack*ptr;
	ptr=top;
	if(top==NULL)
	{
		printf("\n stack overflow");
	}
	else
	{
		top=top->next;
		printf("\n the value being deleted is %d",ptr->data);
		free(ptr);
	}
	return top;
}
//function to show the top most value
int peek(struct stack*top)
{
	if(top==NULL)
	return -1;
	else
	return top->data;
}

