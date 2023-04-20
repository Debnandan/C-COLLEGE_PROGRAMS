#include<stdio.h>
int main()
{
    int i,j,k,x,y,z;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>i;j--)
        {
            printf("  ",j);
        }
        for(k=1;k<=i;k++)
        {
            printf(" *",k);
        }
        printf("\n");
    }
    for(x=1;x<=3;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("  ");
        }
        for(z=3;z>=x;z--)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}