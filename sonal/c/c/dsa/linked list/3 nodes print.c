
#include <stdio.h>
#include <stdlib.h>
 struct Node {
  
    int data;
    struct Node *next;
} ;

int main() {
  
   
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));

    
    first->data = 10;

    struct Node *second = (struct Node *)malloc(sizeof(struct Node));

   
    second->data = 20;

   
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    
    third->data = 30;

    
    first->next = second; 
    second->next = third;
    third->next = NULL;  

    printf("Linked List: ");
    struct Node* temp = first;
  	while(temp) {
      printf("%d ", temp->data);
      temp = temp->next;
    }

    return 0;
}

