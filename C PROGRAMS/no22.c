#include<stdio.h>
#include<math.h>
int main()
{
    int num,num1,count=0,first,last;
    printf("enter numbers : ");
    scanf("%d",&num);
    num1=num;
    do
    {
       num=num/10;
       count++; 
    } while (num>0);
    first=(num1/pow(10,count-1));
    printf("first digit of the given number = %d\n",first);
    last=num1%10;
    printf("last digit of the given number = %d",last);
    return 0;
}