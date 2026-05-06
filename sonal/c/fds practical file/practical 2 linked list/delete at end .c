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
struct node*deleteatend(struct node*head)
{
	struct node*p=head;
	struct node*q=head->next;
    while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
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

 printf("linked list before deletion:\n");
 lltraversal(head);
 head=deleteatend(head);
 printf("linked list after deletion:\n");
 lltraversal(head);
}
