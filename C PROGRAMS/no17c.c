#include <stdio.h>
#include<math.h>
int main()
{
    int i,sum=0,n;
    printf("enter a number : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        sum=sum+pow(i,i);
    }
    printf("1^1+2^2+3^3+...+n^n = %d",sum);
    return 0;
}