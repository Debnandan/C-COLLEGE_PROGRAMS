#include<stdio.h>
int main()
{
    int num[5];
    float avg=0;
    for(int i=0;i<5;i++)
    {
        printf("enter %d number : ",i+1);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<5;i++)
    {
        avg=avg+num[i];
    }
    printf("average of the given 5 numbers = %.2f",avg/5);
    return 0;
}