#include<stdio.h>
int main()
{
    int data[100],i,n,k,temp;
    printf("Enter the number of elements to be sorted : ");
    scanf("%d",&n);
    printf("%d.Enter elements : ",i+1);
    for(i=0; i<n; ++i)
    {
       scanf("%d",&data[i]);
    }
    for(k=0; k<n-1; k++)      //bubble sorting starts here
        for(i=0; i<n-k-1; i++)
        {
           if(data[i]<data[i+1])
           {
            temp = data[i];
            data[i] = data[i+1];
            data[i+1] = temp;
           }
        }
    printf("\nIn ascending order : ");     //printing the array
    for(i=0; i<n; i++)
    {
        printf("%d ",data[i]);
    }
    return 0;
}

