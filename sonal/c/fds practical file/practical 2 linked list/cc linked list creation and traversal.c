#include<stdio.h>
#include<stdlib.h>

struct node{
		int data;
		struct node*next;
	};
void circularlltraversal(struct node*head)
{
	struct node*ptr=head;
	do
	{
		printf("element : %d \n",ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
	
}
void main()
{
//declaring pointers	
struct node*head;
struct node*second;
struct node*third;
struct node*fourth;
//allocating memory
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

head->data=7;
head->next=second;

second->data=12;
second->next=third;

third->data=23;
third->next=fourth;

fourth->data=54;
fourth->next=head;
 
 circularlltraversal(head);
 
}
	
