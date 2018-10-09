#include<stdio.h>
#define SIZE 10
int queue[SIZE];
int head = -1;
int tail = 0;
void enQueue(int value)
{
   if(head == SIZE-1)
    {
      printf("\nQueue is Full!");
    }
   else
    {
      head++;
      queue[head] = value;
    }
}
void deQueue()
{
   if(head == -1)
    {
      printf("\nQueue is Empty!!! ");
    }
   else
    {
      printf("\nDeleted : %d", queue[tail]);
      tail++;
    }
}
void display()
{
   if(head == -1)
    {
      printf("\nQueue is Empty!!!");
    }
   else
    {
      int i;
      printf("\nQueue elements are :\n");
      for(i=tail; i<=head; i++)
	  printf("%d\t",queue[i]);
    }
}
void main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    display();
    deQueue();
    deQueue();
    display();
}

