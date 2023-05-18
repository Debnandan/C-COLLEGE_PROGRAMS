#include <stdio.h>
int main()
{
    int a[8][8], b[8][8], c[8][8];
    printf("A matrix :-\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("enter %d row %d column value : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("B matrix :-\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("enter %d row %d column value : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            c[i][j] = 0;
            for (int k = 1; k <= 3; k++)
            {
                c[i][j] = a[i][k] * b[k][j] + c[i][j];
            }
        }
    }
    printf("A * B matrix :-");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("\n%d row %d column value : %d", i, j, c[i][j]);
        }
    }
    return 0;
}