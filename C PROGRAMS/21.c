#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("enter numbers : ");
    scanf("%d",&num);
    do
    {
       num=num/10;
       count++; 
    } while (num>0);
    printf("total number of digits in the gievn number = %d",count);
    return 0;
}