#include<stdio.h>
int main()
{
    int i,terms,num1=0,num2=1,num3;
    printf("enter how many fibonacci terms you wants to print : ");
    scanf("%d",&terms);
    printf("%d\t",num1);
    printf("%d\t",num2);
    for(i=1;i<=terms-2;i++)
    {
        num3=num1+num2;
        printf("%d\t",num3);
        num1=num2;
        num2=num3;
    }
    
    return 0;
}