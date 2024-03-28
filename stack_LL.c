#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * link;
};
struct node * top=NULL;

void push(int x)
{

  struct node * newnode;
  newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=x;
  newnode->link=top;
  top=newnode;
  return ;

}
void pop()
{
    struct node * temp;
    if(top==NULL)
    printf("STACK UNDERFLOW \n");
    else
    temp=top;
    top=top->link;
    free(temp);
    return ;

}
void peek()
{
    if(top==NULL)
    printf("STACK UNDERFLOW \n");
    else
    {
        printf("TOP MOST ELEMENT IS %d \n",top->data);
    }
    
   return ;
}
void display()
{
    struct node * traversal;
    traversal=top;
    while(traversal!=NULL)
    {
        printf("%d \n",traversal->data);
        traversal=traversal->link;
    }
    return ;
}
int main()
{
    push(4);
    push(87);
    push(23);
    push(34);
    push(45);
    display();
    pop();
    display();
    pop();
    display();
    peek();

    return 0;
}