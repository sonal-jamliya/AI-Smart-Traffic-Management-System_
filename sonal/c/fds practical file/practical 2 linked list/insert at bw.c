#include<stdio.h>
#include<stdlib.h>

struct node{
		int data;
		struct node*next;
	};
	int d;
void lltraversal(struct node*ptr)
{
	while(ptr!=NULL)
	{
		printf("element : %d \n",ptr->data);
		ptr=ptr->next;
	}
}

struct node*insertatfirst(struct node*head,int data)
{
	printf("enter the data:");
	scanf("%d",&d);
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->next=head;
	ptr->data=d;
	return ptr;
}
struct node*insertatindex(struct node*head,int data,int index)
{
	int d;
	printf("enter the data:");
	scanf("%d",&d);
	printf("enter the index:");
	scanf("%d",&index);
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	struct node*p= head;
	int i=0;
	
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data=d;
	ptr->next=p->next;
	p->next=ptr;
	
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
 head=insertatindex(head,d,3);
 lltraversal(head);
}
	
