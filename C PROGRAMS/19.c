#include<stdio.h>
int main()
{
    int i,num,mul=1;
    printf("enter a number : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        mul=num*i;
        printf("%d x %d = %d\n",num,i,mul);
    }
    return 0;
}