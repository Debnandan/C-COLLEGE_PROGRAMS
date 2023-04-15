#include <stdio.h>
int main()
{
    int i,sum=0;
    for (int i = 1; i <= 10; i++)
    {
        sum=sum+i;
    }
    printf("sum of numbers between 1 to 10 = %d",sum);
    return 0;
}