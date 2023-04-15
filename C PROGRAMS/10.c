#include <stdio.h>
int main()
{
    float sell, cost, profit, loss;
    printf("enter cost price in rs: ");
    scanf("%f", &cost);
    printf("enter selling price in rs: ");
    scanf("%f", &sell);
    if (sell > cost)
    {
        profit = sell - cost;
        printf("profited by %.2f ruppees or ", profit);
        profit = (profit / cost) * 100;
        printf("%.2f percent", profit);
    }
    else if (cost > sell)
    {
        loss = cost - sell;
        printf("loss by %.2f ruppees or ", loss);
        loss = (loss / cost) * 100;
        printf("%.2f percent", loss);
    }
    else
    {
        printf("no profit nor loss");
    }
    return 0;
}