#include <stdio.h>
int stack[20];
int head = -1;                   //an empty stack
void push(int data)
{
   head++;
   stack[head] = data;
}
int pop()
{
   int data = stack[head];
   head--;
   return data;
}
void display()
{
    printf("Data in your stack\n");
    int i;
    for(i=0;i<=head;i++)
    {
        printf("%d ",stack[i]);
    }
}
void main()
{
    push(5);
    push(7);
    push(10);
    display();
    int data = pop();
    printf("\nYour pop data %d \n",data);    //displaying popped element by calling display function
    display();
}
