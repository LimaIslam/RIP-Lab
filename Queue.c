#include<stdio.h>
#define SIZE 10
int queue[SIZE];
int head = -1;                 //empty queue
int tail = 0;
void enQueue(int value)
{
   if(head == SIZE-1)          //checking the queue is full or not
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
   if(head == -1)              //checking the queue is empty or not
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
      int i;
      printf("\nQueue elements are :\n");
      for(i=tail; i<=head; i++)
	  printf("%d\t",queue[i]);
}
void main()
{
    enQueue(10);       //calling enqueue function
    enQueue(20);       //calling enqueue function
    enQueue(30);       //calling enqueue function
    enQueue(40);       //calling enqueue function
    display();         //calling display function
    deQueue();         //calling dequeue function
    deQueue();         //calling dequeue function
    display();         //calling display function
}
