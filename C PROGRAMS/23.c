#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i==5||i==71)
        {
            continue;
        }
        printf("%d\t",i);
    }
    return 0;
}