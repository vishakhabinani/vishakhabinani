#include<stdio.h>
#include<stdlib.h>
int main()
{
struct node{
    
        int data;
        struct node *link;
    };
struct node * head;
struct node * second;              //created a linked list of five nodes to understand deletion better
struct node * third;
struct node * fourth;
struct node * fifth;
struct node * traversal;
int temp;
struct node * ptr;
struct node * cpt;
head=(struct node *) malloc(sizeof(struct node));
second=(struct node *) malloc(sizeof(struct node));
third=(struct node *) malloc(sizeof(struct node));
fourth=(struct node *) malloc(sizeof(struct node));
fifth=(struct node *) malloc(sizeof(struct node));

printf("Enter first node data ");
scanf("%d",&head->data);
head->link=second;                    

printf("Enter second node data ");
scanf("%d",&second->data);
second->link=third;                    //second node

printf("Enter third node data ");
scanf("%d",&third->data);           // third node
third->link=fourth;

printf("Enter fourth node data ");
scanf("%d",&fourth->data);           // fourth node
fourth->link=fifth;

printf("Enter fifth node data ");
scanf("%d",&fifth->data);           // fifth node
fifth->link=NULL;

printf("LIST BEFORE SORTING \n");
traversal=head;
    while(traversal!=NULL)                //printing the list before insertion of specific node
    {
        printf(" %d \n",traversal->data);
        traversal=traversal->link;
    }

    ptr=head;
    while(ptr->link!=NULL)
    {
        cpt=ptr->link;
            //most important-INITIALISE CPT AS PER PTR WITHIN PTR LOOP
        while(cpt!=NULL)
        {
            if(ptr->data>cpt->data)
            {
                temp=cpt->data;
                cpt->data=ptr->data;      // swapping of ONLY the DATA part
                ptr->data=temp;
            }
            cpt=cpt->link;
        }
        ptr=ptr->link;
    }

    printf("LIST AFTER SORTING IS \n");
    traversal=head;
    while(traversal!=NULL)                //printing the list after sorting
    {
        printf(" %d \n",traversal->data);
        traversal=traversal->link;
    }


return 0;
}