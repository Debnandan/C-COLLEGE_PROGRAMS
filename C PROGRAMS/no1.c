#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter first number : ");
    scanf("%d",&num1);
    printf("enter second number : ");
    scanf("%d",&num2);
    printf("enter third number : ");
    scanf("%d",&num3);
    if(num1>num2&&num1>num3)
    {
        printf("first given number is greater");
    }
    else if(num2>num3)
    {
        printf("second given number is greater");
    }
    else
    {
        printf("third given number is greater");
    }
    return 0;
}