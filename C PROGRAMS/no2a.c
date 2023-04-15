#include<stdio.h>
#include<math.h>
int main()
{
    int x,exp;
    printf("enter x : ");
    scanf("%d",&x);
    exp=pow(x,2)+(2*x);
    printf("x^2+2x=%d",exp);
    return 0;
}
