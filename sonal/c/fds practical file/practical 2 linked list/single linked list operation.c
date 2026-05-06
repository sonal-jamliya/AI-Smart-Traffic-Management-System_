//SONAL JAMLIYA
//23100BTAIMLM14566
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//CREATING NODE
struct node{
	int data;
	struct node*next;
};
// Declaring different functions to perform operations
struct node*start=NULL;
struct node*create_ll(struct node*);
struct node*display(struct node*);
struct node*insert_beg(struct node*);
struct node*insert_end(struct node*);
struct node*delete_beg(struct node*);
struct node*delete_end(struct node*);
struct node*delete_list(struct node*);
struct node*sort_list(struct node*);

//making menu to select whict operation is to be performed
int main(int argc,char*argv[])
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
		printf("\n 8: sort the list ");
		printf("\n 9: exit");
		printf("\n\n enter your option ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:start=create_ll(start);
			printf("\n linked list created");
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
			case 8:start=sort_list(start);
			break;
		}
	}while(option!=9);
	return 0;
}
//function for creating linked list
struct node*create_ll(struct node*start)
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
//function to display the linked list
struct node*display(struct node*start)
{
	struct node*ptr;
	ptr=start;
	if(ptr==NULL)
	{
		printf("LIST IS EMPTY");
		return 0;
	}
	while(ptr!=NULL)
	{
		printf("\t %d",ptr->data);
		ptr=ptr->next;
	}
	return start;
}
//function to insert node at beginning
struct node*insert_beg(struct node*start)
{
	struct node*new_node;
	int num;
	printf("\n enter the data:");
	scanf("%d",&num);
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;
	new_node->next=start;
	start=new_node;
	return start;
}
//function to insert node at end
struct node*insert_end(struct node*start)
{
	struct node *ptr,*new_node;
	int num;
	printf("\n enter the data :");
	scanf("%d",&num);
	new_node=(struct node*)malloc(sizeof(struct node*));
	new_node->data=num;
	new_node->next=start;
	start=new_node;
	return start;
}
//function to delete node from beginning
struct node*delete_beg(struct node*start)
{
	struct node*ptr;
	ptr=start;
	start=start->next;
	free(ptr);
	return start;
}
//function to delete node from end
struct node*delete_end(struct node*start)
{
	struct node*ptr,*preptr;
	ptr=start;
	while(ptr->next!=NULL)
	{
		preptr=ptr;
		ptr=ptr->next;
	}
	preptr->next=NULL;
	free(ptr);
	return start;
}
//function to delete whole linked list
struct node*delete_list(struct node*start)
{
	struct node*ptr;
	if(start!=NULL)
	{
		ptr=start;
		while(ptr!=NULL)
	    {
		printf("\n %d is to be deleted next",ptr->data);
		start=delete_beg(ptr);
		ptr=start;
     	}
    }
    return start;
}
//function to sort whole linked list
struct node*sort_list(struct node*start)
{
	struct node*ptr1,*ptr2;
	int temp;
	ptr1=start;
	while(ptr1->next!=NULL)
	{
		ptr2=ptr1->next;
		while(ptr2!=NULL)
		{
			if(ptr1->data>ptr2->data)
			{
				temp=ptr1->data;
				ptr1->data=ptr2->data;
				ptr2->data=temp;
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
	return start;
}

