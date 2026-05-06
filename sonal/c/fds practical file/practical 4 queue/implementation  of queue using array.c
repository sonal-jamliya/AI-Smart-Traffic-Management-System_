//SONAL JAMLIYA
//23100BTAIMLM14566
#include<stdio.h>
#define MAX 10
//defining MAX value that can be inserted is 10 as global
// Declaring different functions to perform operations
int queue[MAX];
int front=-1,rear=-1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
//make a menu to choose which function to be performed
int main()
{
	int val, option;
	do
	{
		printf("\n ******main menu******");
		printf("\n 1.insert an element");
		printf("\n 2.delete an element");
		printf("\n 3.peek");
		printf("\n 4.display the queue");
		printf("\n 5.exit");
		printf("\n enter your option:");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				insert();
				break;
			case 2:
			    val=delete_element();
			    if(val!=-1)
			    printf("\n the number deleted is :%d",val);
				break;
			case 3:
			    val=peek();
				if(val!=-1);
			    printf("the first value in queue is:%d",val);
				break;
			case 4:
			   	display();
				break;	
		}
	}while(option !=5);
	return 0;
}
//function to insert a value
void insert()
{
	int num;
	printf("\n enter the number to be inserted in the queue");
	scanf("%d",&num);
	if(rear==MAX-1)
	printf("\n overflow");
	else if(front==-1&&rear==-1)
	front=rear=0;
	else
	rear++;
	queue[rear]=num;
}
//function to delete a value
int delete_element()
{
	int val;
	if(front==-1||front>rear)
	{
		printf("\n underflow");
		return -1;
	}
	else
	{
		val=queue[front];
		front++;
	if(front>rear)
		front=rear=-1;
		return val;
	}
}
//function to peek a value
int peek()
{
	if(front==-1||front>rear)
	{
		printf("\n queue is empty");
		return-1;
	}
	else
	{
		return queue[front];
	}
}
//function to display a value
void display()
{
	int i;
	printf("\n");
	if(front==-1||front>rear)
	{
			printf("\n queue is empty");
    }
    else
    {
    	for(i=front;i<=rear;i++)
    	printf("\t %d",queue[i]);
	}
}
