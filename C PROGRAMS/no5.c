#include<stdio.h>
int main()
{
    int year;
    printf("enter any year : ");
    scanf("%d",&year);
    if(year%4==0)
    {   
        printf("given year is leap year");
    }
    else
    {
        printf("given year is not a leap year");
    }
    return 0;
}