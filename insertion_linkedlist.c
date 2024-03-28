#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node{
    
        int data;
        struct node *link;
    };

struct node * head;
struct node * temp;
struct node * final;
struct node * traversal;
struct node * endnode;     //declaration of a new node that we will add at the end

head=(struct node *) malloc(sizeof(struct node));
temp=(struct node *) malloc(sizeof(struct node));
final=(struct node *) malloc(sizeof(struct node));
endnode=(struct node *) malloc(sizeof(struct node));    //creating and assigning memory for the new node that we will add at the end

printf("Enter first node data ");
scanf("%d",&head->data);
head->link=temp;

printf("Enter second node data ");
scanf("%d",&temp->data);
temp->link=final;

printf("Enter third node data ");
scanf("%d",&final->data);
final->link=NULL;

printf(" Enter third node data ");
scanf("%d",&endnode->data);

 traversal=head;
    while(traversal->link!=NULL)
    {
        traversal=traversal->link;       //Traversal till end of list so address of last node= traversal pointer
    }
    endnode->link=NULL;                  // making endnode the last node of the list by making its link part NULL 
    traversal->link=endnode;             //traversal ka link part should point to the end node
traversal=head;
 while(traversal!=NULL)
 {
    printf("ELEMENTS ARE %d \n",traversal->data);
    traversal=traversal->link;
 }

    
    return 0;
}