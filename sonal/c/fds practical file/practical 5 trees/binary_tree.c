//sonal jamliya
//23100BTAIMLM14566
#include<stdio.h>
#include<malloc.h>

// Creating a node 
struct node{
    int data;
    struct node *left;
    struct node *right;
};

// Declaring different functions to perform operations
struct node *tree;
void create_tree(struct node *);
struct node *insertElement(struct node * , int);
void inorderTraversal(struct node *);
struct node *deleteElement(struct node * , int);

//Now make menu like to choose which operation we want to perform in main function
int main(){
    int option , val;
    struct node *ptr;
    create_tree(tree);
    do{
        printf("\n---------------Main Menu----------------\n");
        printf("\n1.Insert an Element");
        printf("\n2.Inorder Traversal");
        printf("\n3.Delete an Element");
        printf("\n4.Exit");
        printf("\n\n Enter Your option :");
        scanf("%d",&option);
        switch(option){
            case 1: 
                printf("\n Enter the value of the new node :");
                scanf("%d",&val);
                tree = insertElement(tree , val);
                break;
            case 2:
                printf("\n The Elements of the tree are :");
                inorderTraversal(tree);
                break;
            case 3:
                printf("\n Enter the  Elements to be deleted :");
                scanf("%d",&val);
                tree = deleteElement(tree , val);
                break;
        }
    }while(option !=4);
    getchar();
    return 0;
}

// defining the create tree function
void create_tree(struct node *tree){
    tree = NULL;
}
// defining the insert  function
struct node *insertElement(struct node *tree , int val){
    struct node *ptr , *nodeptr , *parentptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = val;
    ptr -> left = NULL;
    ptr -> right = NULL;
    if(tree==NULL){
        tree = ptr;
        ptr -> left = NULL;
        ptr -> right = NULL;
    }
    else{
        parentptr=NULL;
        nodeptr = tree;
        while(nodeptr != NULL){
            parentptr = nodeptr;
            if(val<nodeptr->data){
                nodeptr = nodeptr->left;
            }
            else{
                nodeptr = nodeptr->right;
            }
        }
        if(val<parentptr->data){
            parentptr->left = ptr;
        }
        else{
            parentptr->right = ptr;
        }
    }
    return tree;
}

// Creating or defining the function for inorder Traversal
void inorderTraversal(struct node *tree){
    if(tree != NULL){
        inorderTraversal(tree->left);
        printf("%d\t",tree->data);
        inorderTraversal(tree->right);
    }
}

// Defing the function to delete an element from tree
struct node *deleteElement(struct node *tree , int val){
    struct node *cur , *parent , *suc, *psuc , *ptr;
    if(tree->left==NULL){
        printf("\n The Tree is Empty");
        return(tree);
    }
    parent =tree;
    cur = tree->left;
    while(cur != NULL && val != cur->data){
        parent  = cur; 
        cur = (val<cur->data)? cur->left:cur->right;

    }
    if(cur == NULL){
        printf("\n The value to be deleted is not present in the tree");
        return(tree);
    }
    if(cur->left == NULL){
        ptr  = cur->right;
    }
    else if(cur->right == NULL){
        ptr =  cur->left;

    }
    else{

        // Find the in-order successor and its parent
        psuc = cur;
        cur = cur->left;
        while(suc->left!=NULL){
            psuc = suc;
            suc =  suc->left;
        }
        if(cur==psuc){
            // Situation 1
            suc->left = cur->right;

        }
        else{
            // Situation 2
            suc->left =  cur->left;
            psuc->left = suc->right;
            suc->right = cur->right;
        }
        ptr =  suc;
    }
    // Attach ptr to the parent node
    if(parent->left == cur){
        parent->left-ptr;
    }
    else{
        parent->right-ptr;
    }
    free(cur);
    return tree;

}
