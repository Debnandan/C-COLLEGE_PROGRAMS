#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("enter a number whose factorial you wants to calculate : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d  = %d ",num,fact);
    return 0;
}