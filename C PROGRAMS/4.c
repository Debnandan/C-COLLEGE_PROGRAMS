#include<stdio.h>
int main()
{
    char ch;
    printf("enter an input : ");
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=112))                  // if  alphabets
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("enter input is a vowel");
        }
        else
        {
            printf("enter input is a consonent");
        }
    }
    else if(ch>=48&&ch<=57)
    {
        printf("enter input is a number");
    }
    else
    {
        printf("enter input is a special symbol");
    }
    return 0;
}