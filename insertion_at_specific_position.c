#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node{
    
        int data;
        struct node *link;
    };
int i=1;
int pos;
struct node * head;
struct node * temp;
struct node * final;
struct node * traversal;
struct node * addnode;

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

 printf("Enter position after which you want the New Node \n");
 scanf("%d",&pos);
 traversal=head;
 while(i<pos)
 { 
    traversal=traversal->link;
    i++;
 }
 addnode=(struct node *) malloc(sizeof(struct node));
 printf(" ENTER DATA FOR NEW NODE ");
 scanf("%d",&addnode->data);
 addnode->link=traversal->link;
 traversal->link=addnode;

 traversal=head;
 while(traversal!=NULL)
 {
    printf(" NOW ELEMENTS ARE %d \n",traversal->data);
    traversal=traversal->link;
 }



    
    return 0;
}