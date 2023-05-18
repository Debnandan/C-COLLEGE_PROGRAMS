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
    printf("transpose A matrix :-\n");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("enter %d row %d column value : %d\n", i, j,a[j][i]);
        }
    }
    return 0;
}