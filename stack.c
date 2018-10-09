#include<stdio.h>
int A[20];
int top = -1; //empty stack
void push(int data)
{
    top++;
    A[top] = data; //data is an integer
}
void pop()
{
    if(top==-1){
        printf("Error; no elements to pop\n");
        return;
    }
    top--;
}
int Top()
{
    return A[top];
}
void printA()  //simply for verifying push & pop
{
    printf("Data on your stack : \n");
    int i;
    for(i=0; i<=top; i++)
        printf("%d ",A[i]);
        printf("\n");
}
main()
{
    push(5);
    push(10);
    push(15);
    push(20);
    printA();
    pop();
    printA();
    push(25);
    push(30);
    printA();
}
