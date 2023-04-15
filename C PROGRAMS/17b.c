#include <stdio.h>
int main()
{
    int i,sum=0,n;
    printf("enter a number : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        sum=sum+(i*i);
    }
    printf("1^2+2^2+...+n^2 = %d",sum);
    return 0;
}