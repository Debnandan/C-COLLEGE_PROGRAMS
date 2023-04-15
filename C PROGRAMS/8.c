#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character : ");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
    {
        printf("%c is in lowercase",ch);
    }
    else
    {
        printf("%c is in uppercase",ch);
    }
    return 0;
}