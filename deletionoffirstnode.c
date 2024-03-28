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
struct node * tempo;
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
    tempo=head;
    head=head->link;
    free(tempo);
    printf("ELEMENTS AFTER DELETION ARE :");

    traversal=head;
    while(traversal!=NULL)               
    {
        printf(" %d \n",traversal->data);
        traversal=traversal->link;
    }
    
    return 0;
}