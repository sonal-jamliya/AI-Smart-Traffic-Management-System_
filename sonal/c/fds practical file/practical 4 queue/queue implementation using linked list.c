//sonal jamliya
//23100BTAIMLM14566
#include<stdio.h>
#include<malloc.h>
//making a node
struct node
{
    int data;
	struct node*next;
};
struct queue
{
	struct node*front;
	struct node*rear;
};
// Declaring different functions to perform operations
struct queue*q;
void create_queue(struct queue*);
struct queue*insert(struct queue*,int);
struct queue*delete_element(struct queue*);
struct queue*display(struct queue*);
int peek(struct queue*);
//Now make menu like to choose which operation we want to perform in main function
int main()
{
	int val, option;
	q=(struct queue*)malloc(sizeof(struct queue));
	create_queue(q);
	do
	{
		printf("\n ******main menu******");
		printf("\n 1.insert");
		printf("\n 2.delete");
		printf("\n 3.peek");
		printf("\n 4.display");
		printf("\n 5.exit");
		printf("\n enter your option:");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("\n enter the number to be inserted in stack:");
				scanf("%d",&val);
				q=insert(q,val);
				break;
			case 2:
				q=delete_element(q);
				break;
			case 3:
		         val=peek(q);
		         if(val !=-1)
		         printf("\n the value at the front of queue is:%d",val);
				break;
			case 4:
			   	q=display(q);
				break;	
		}
	}while(option !=5);
	return 0;
}
//function to create queue
void create_queue(struct queue*q)
{
	q->rear=NULL;
	q->front=NULL;
}
//function to insert element in queue
struct queue*insert(struct queue*top,int val)
{
	struct node*ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=val;
	if(q->front==NULL)
	{
		q->front=ptr;
		q->rear=ptr;
		q->front->next=q->rear->next=NULL;	
	}
	else
	{
		q->rear->next=ptr;
		q->rear=ptr;
		q->rear->next=NULL;
	}
	return q;
}
//function to display element in queue
struct queue*display(struct queue*q)
{
	struct node*ptr;
	ptr=q->front;
	if(ptr==NULL)
	{
		printf("\n queue is empty");
	}
	else
	{
		 printf("\n");
		 while(ptr!=q->rear)
		 {
		 	printf("%d\t",ptr->data);
		 	ptr=ptr->next;
		 }
		 printf("%d\t",ptr->data);
	}
	return q;
}	
//function to delete element in queue
struct queue*delete_element(struct queue*q)
	{
		struct node*ptr;
		ptr=q->front;
		if(q->front==NULL)
		printf("\n underflow");
		else
		{
			q->front=q->front->next;
			printf("\n the value being deleted is:%d",ptr->data);
			free(ptr);
		}
		return q;
	}
//function to show top most element
int peek(struct queue*q)
{
	if(q->front==NULL)
	{
		printf("\n queue is empty");
		return -1;
	}
	else
	return q->front->data;
}
