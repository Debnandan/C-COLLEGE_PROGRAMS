#include<stdio.h>
int main()
{
    int i,j,x,y;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
    printf("\n");
    }
    for(x=1;x<=4;x++)
    {
        for(y=4;y>=x;y--)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}