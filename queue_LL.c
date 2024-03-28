#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
void enqueue( int x)
{
    struct node * newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(rear==NULL)     //first element is being inserted
    {
      newnode->data=x;
      newnode->link=NULL;
      rear=newnode;
      front=newnode;
    }
    else
    {
       newnode->data=x;
       newnode->link=NULL;
       rear->link=newnode;
       rear=newnode;
    }
    return;
}
void dequeue()
{
    struct node *temp;
    if(front==NULL)
    {
    printf("QUEUE UNDERFLOW \n");
    }
    else if(front==rear)    //only one left to be deleted
    {
       temp=front;
       front=rear=NULL;     //restore empty queue condition after deletion of last element
       free(temp);
    }
    else{
        temp=front;
        front=front->link;
        free(temp);
    }
    return;
}
void display()
{
    struct node *traversal;
    traversal=front;
    while(traversal!=NULL)
    {
        printf("%d \n",traversal->data);
        traversal=traversal->link;
    }
    return;
}
int main()
{
 dequeue();
enqueue(74);
enqueue(56);
enqueue(32);
enqueue(4);
enqueue(12);
display();
dequeue();
dequeue();
display();
enqueue(88);
display();
dequeue();
display();
return 0;
}


