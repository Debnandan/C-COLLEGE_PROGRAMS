#include <stdio.h>
int main()
{
    float i,sum = 0;
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (1 / i);
    }
    printf("1 + 1/2 + 1/3...+1/n = %.2f", sum);
    return 0;
}