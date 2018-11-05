#include<stdio.h>
int main()
{
    int A[100],i,n,position,temp;
    printf("Enter the number of elements to be sorted : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(i=0; i<n; ++i)
    {
       scanf("%d",&A[i]);
    }
    for(position=0; position<n; ++position)
    {
        for(i=position+1; i<n; ++i)
        {
           if(A[position]>A[i])
           {
            temp = A[position];
            A[position] = A[i];
            A[i] = temp;
           }
        }
    }
    printf("\nIn descending order : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
