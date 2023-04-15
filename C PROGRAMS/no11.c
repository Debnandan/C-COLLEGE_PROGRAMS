#include<stdio.h>
int main()
{
    int marks;
    for(int i=1;i<=5;i++)
    {
        printf("enter %d subject marks : ",i);
        scanf("%d",&marks);
        if(marks<=100&&marks>90)
        {
            printf("%d subject grade : A",i);
        }
        else if(marks<=90&&marks>80)
        {
            printf("%d subject grade : B",i);
        }
        else if(marks<=80&&marks>70)
        {
            printf("%d subject grade : C",i);
        }
        else if(marks<=70&&marks>60)
        {
            printf("%d subject grade : D",i);
        }
        else
        {
            printf("fail");
        }
        printf("\n");
    }
    return 0;
}