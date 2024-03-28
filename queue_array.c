#include<stdio.h>
int queue[5];
int front=-1;
int rear =-1;
void enqueue(int x)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else if(rear==4)
    {
        printf("OVERFLOW \n");
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
    return ;
}
void dequeue()
{
     if(front==-1 && rear==-1)
     {
        printf("EMPTY QUEUE \n");
    
     }
     else if(front==rear) //only one last element is left in the queue..once this is deleted the queue will become EMPTY again
     {
        front=rear=-1;
     }
     else
     {
       front++;
     }
   return;  
}
void peek()
{
    printf("FRONT ELEMENT IS %d \n",queue[front]);
    return;
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
      printf("ELEMENTS OF QUEUE ARE %d \n ", queue[i]);
    }
    return;
}
int main()
{
    dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(4);
    enqueue(87);
    enqueue(67);
    enqueue(56);
    display();
    peek();
    dequeue();
    dequeue();
    display();
    peek();
    return 0;
    }