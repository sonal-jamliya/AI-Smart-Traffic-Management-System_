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

struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
 
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
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
 head=insertAtEnd(head, 65)
 lltraversal(head);
}
