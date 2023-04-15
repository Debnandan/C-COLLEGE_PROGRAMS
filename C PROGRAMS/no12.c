#include <stdio.h>
int main()
{
    int choice, first_num, sec_num;
    float result;
    printf("------SIMPLE CALULATOR------ \n1.Addition \n2.Subtraction \n3.Division \n4.Multiplication \nEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1: printf("Addition\n");
                printf("enter first number : ");
                scanf("%d", &first_num);
                printf("enter second number : ");
                scanf("%d", &sec_num);
                result = first_num + sec_num;
                printf("result of %d + %d = %.2f", first_num, sec_num, result);
                break;
            
        case 2: printf("Subtraction\n");
                printf("enter first number : ");
                scanf("%d", &first_num);
                printf("enter second number : ");
                scanf("%d", &sec_num);
                result = first_num - sec_num;
                printf("result of %d - %d = %.2f", first_num, sec_num, result);
                break;
            
        case 3: printf("Division\n");
                printf("enter first number : ");
                scanf("%d",&first_num);
                printf("enter second number : ");
                scanf("%d", &sec_num);
                result = (float)first_num / (float)sec_num;
                printf("result of %d / %d = %.2f", first_num, sec_num, result);
                break;
        
        case 4: printf("Multiplication");
                printf("enter first number : ");
                scanf("%d", &first_num);
                printf("enter second number : ");
                scanf("%d", &sec_num);
                result = first_num * sec_num;
                printf("result of %d * %d = %.2f", first_num, sec_num, result);
                break;
        default: printf("invalid choice");
    }
    return 0;
}
