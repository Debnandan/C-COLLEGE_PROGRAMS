#include <stdio.h>
#include<math.h>

int main()
{
    float i,sum = 0;
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (1 /pow(i,2));
    }
    printf("1 + 1/2^2 + 1/3^2...+1/n^2 = %.2f", sum);
    return 0;
}