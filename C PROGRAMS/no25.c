#include<stdio.h>
int main()
{
    int i,num,flag=0;
    printf("enter a number : ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            printf("given number is not a prime number ");
            break;
        }
    }
    if(flag==0)
    {
        printf("given number is a prime number ");
    }
    return 0;
}