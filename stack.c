// Stack insertion using array

#include<stdio.h>
 int stack_arr[5];
 int top=-1;

void push (int data)
{
     if(top==4)
   {
    printf("Stack overflow");
   }
    top++;
    stack_arr[top]=data;
    return;
}
int pop()
{
    int data;
    if(top==-1)
    printf("STACK UNDERFLOW");
    data=stack_arr[top];
    top--;
    return data;
    
}
int main()
{
  int data;
   push(1);
   push(2);
   push(3);
   push(4);
   push(5);
   pop();
   pop();
   pop();
   pop();
   pop();
   pop();


   
   return 0;
}