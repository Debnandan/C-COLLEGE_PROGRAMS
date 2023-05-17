#include<stdio.h>
int main()
{
    int arr[5][5],i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("enter %d row %d column value = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("\nvalue of  %d row %d column = %d ",i,j,arr[i][j]);
        }
    }
    return 0;
}