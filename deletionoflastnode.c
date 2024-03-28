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
struct node * prevnode;
head=(struct node *) malloc(sizeof(struct node));
temp=(struct node *) malloc(sizeof(struct node));
final=(struct node *) malloc(sizeof(struct node));
printf("Enter first node data ");
scanf("%d",&head->data);
head->link=temp;                    
printf("Enter second node data ");
scanf("%d",&temp->data);
temp->link=final;                

printf("Enter third node data ");
scanf("%d",&final->data);           
final->link=NULL;
traversal=head;
    while(traversal!=NULL)               
    {
        printf("ELEMENTS ARE %d \n",traversal->data);
        traversal=traversal->link;
    }
    
    traversal=head;
    while(traversal->link!=NULL)               
    {
        prevnode=traversal;        // assigning the second last node a pointer before traversal increments
                                   // because we have to keep track of the second last node as it will be the new final node.
        traversal=traversal->link;
    }
    prevnode->link=NULL;          //making the second last node, the final node.
    free(traversal);            //deletion of last node as after traversal comes out of the while loop traversal becomes last node 

    printf("ELEMENTS AFTER DELETION ARE \n ");
    traversal=head;
    while(traversal!=NULL)               
    {
        printf("ELEMENTS ARE %d \n",traversal->data);
        traversal=traversal->link;
    }

    return 0;
}