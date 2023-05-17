#include<stdio.h>
int main()
{
    int num[5];
    for(int i=0;i<5;i++)
    {
        printf("enter %d number \n",i+1);
        scanf("%d",&num[i]);
    }
    int avg=0;
    for(int i=0;i<5;i++)
    {
        avg=avg+num[i];
    }
    printf("avg = %d",avg);
    return 0;
}