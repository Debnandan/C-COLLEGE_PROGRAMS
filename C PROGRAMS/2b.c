#include<stdio.h>
int main()
{
    int a,b,c,x,exp;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("enter c : ");
    scanf("%d",&c);
    printf("enter x : ");
    scanf("%d",&x);
    exp = (a*x*x)+(b*x)+c;
    printf("value of quadratic equation = %d",exp);
    return 0;
}