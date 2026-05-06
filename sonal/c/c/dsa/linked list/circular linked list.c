#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node*next;
};
struct node*start=NULL;
struct node*create_cll(struct node*);
struct node*display(struct node*);
struct node*insert_beg(struct node*);
struct node*insert_end(struct node*);
struct node*delete_beg(struct node*);
struct node*delete_end(struct node*);
struct node*delete_list(struct node*);


int main()
{
	int option;
	do
	{
		printf("\n*****main menu*****");
		printf("\n 1: create a list");
		printf("\n 2: display a list");
		printf("\n 3: add a node at the beginning");
		printf("\n 4: add a node at the end");
		printf("\n 5: delete a node from the beginning");
		printf("\n 6: delete a node from the end");
		printf("\n 7: delete the entire list");
		printf("\n 8: exit");
		printf("\n\n enter your option ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:start=create_cll(start);
			printf("\n circular linked list created");
			break;
			case 2:start=display(start);
			break;
			case 3:start=insert_beg(start);
			break;
			case 4:start=insert_end(start);
			break;
			case 5:start=delete_beg(start);
			break;
			case 6:start=delete_end(start);
			break;
			case 7:start=delete_list(start);
			printf("\n linked list is deleted");
			break;
		}
	}while(option!=8);
	return 0;
}
struct node*create_cll(struct node*start)
{
	struct node *new_node,*ptr;
	int num;
	printf("\n enter -1 to end");
	printf("\n enter the data:");
	scanf("%d",&num);
	while(num!=-1)
	{
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=num;
		if(start==NULL)
		{
			new_node->next=NULL;
			start=new_node;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next=new_node;
			new_node->next=NULL;
		}
		printf("\n enter the data:");
		scanf("%d",&num);
	}
	return start;
}
struct node*display(struct node*start)
{
	struct node*ptr;
	ptr=start;
	if(ptr==NULL)
	{
		printf("LIST IS EMPTY");
		return 0;
	}
	while(ptr->next!=start)
	{
		printf("\t %d",ptr->data);
		ptr=ptr->next;
	}
	printf("\t %d,ptr->data");
	return start;
}
struct node*insert_beg(struct node*start)
{
	struct node*new_node,*ptr;
	int num;
	printf("\n enter the data:");
	scanf("%d",&num);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;
	ptr=start;
	while(ptr->next!=start)
      	ptr=ptr->next;
	ptr->next=new_node;
	new_node->next=start;
	start=new_node;
	return start;
}
struct node*insert_end(struct node*start)
{
	struct node *ptr,*new_node;
	int num;
	printf("\n enter the data :");
	scanf("%d",&num);
	new_node=(struct node*)malloc(sizeof(struct node*));
	new_node->data=num;
	ptr=start;
	while(ptr->next!=start)
      	ptr=ptr->next;
	ptr->next=new_node;
	new_node->next=start;	
	return start;
}
struct node*delete_beg(struct node*start)
{
	struct node*ptr;
	ptr=start;
	while(ptr->next!=start)
      	ptr=ptr->next;
	ptr->next=start->next;
	free(start);	
	start=ptr->next;
	return start;
}
struct node*delete_end(struct node*start)
{
	struct node*ptr,*preptr;
	ptr=start;
	while(ptr->next!=start)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
	return start;
}
struct node*delete_list(struct node*start)
{
	struct node*ptr;
	ptr=start;
	while(ptr->next!=start)
	start=delete_end(start);
	free(start);
    return start;
}


