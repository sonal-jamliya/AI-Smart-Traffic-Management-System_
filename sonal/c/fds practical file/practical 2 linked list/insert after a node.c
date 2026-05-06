#include<stdio.h>
#include<stdlib.h>

struct node{
		int data;
		struct node*next;
	};
void lltraversal(struct node*ptr)
{
	while(ptr!=NULL)
	{
		printf("element : %d \n",ptr->data);
		ptr=ptr->next;
	}
}
struct node*insertafternode(struct node*head,struct node*prev,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	
	ptr->next=prev->next;
	prev->next=ptr;
		return head;
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
fourth->next=NULL;
 
 lltraversal(head);
 printf("linked list after insertion:");
 head=insertafternode(head,third,45);
 lltraversal(head);
}
	
