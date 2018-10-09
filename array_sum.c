#include<stdio.h>
void main()
{
    int a[10][10];
    int i,j,r,c;
    printf("Enter the number of rows : \n");
    scanf("%d", &r);
    printf("Enter the number of columns : \n");
    scanf("%d", &c);
    printf("Enter the elements : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          scanf("%d", &a[i][j]);
        }
    }
    printf("your array \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          printf("%d ", a[i][j]);
        }
    printf("\n");
    }
}
