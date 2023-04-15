#include<stdio.h>
int main()
{
    int i,j,k,num=1;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>i;j--)
        {
            printf(" ",j);
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}