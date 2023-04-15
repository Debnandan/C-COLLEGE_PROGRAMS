#include <stdio.h>
int main()
{
    int choice;
    float result;
    printf("------CONVERTER------ \n1.Distance converter \n2.Weight converter \n3.temperature converter \nEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1: printf("Distance converter:-\n");
                int km,m;
                printf("enter distance in km : ");
                scanf("%d",&km);
                m=km*1000;
                printf("%d km = %d m",km,m);
                break;
        case 2: printf("Weight converter:-\n");
                int kg,g;
                printf("enter weight in kg : ");
                scanf("%d",&kg);
                g=kg*1000;
                printf("%d kg = %d g",kg,g);
                break;
        case 3: printf("Temperature converter:-\n");
                float deg,fer;
                printf("enter temperature in degree : ");
                scanf("%f",&deg);
                fer=deg*(9/5)+32;
                printf("%.2f degree = %.2f ferhenheit",deg,fer);
                break;
        default:  printf("invalid choice-");
    }
    return 0;
}