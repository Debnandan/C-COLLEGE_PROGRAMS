#include<stdio.h>
int main()
{
    int i,j,a,b,c,x,y,z;
    for(i=1;i<=3;i++)
    {
        for(a=1;a<=i;a++)
        {
            printf(" *",a);
        }
        for(b=3;b>i;b--)
        {
            printf("    ",b);
        }
        for(c=1;c<=i;c++)
        {
            printf(" *",c);
        }
        printf("\n");
    }
    for(j=1;j<=2;j++)
    {
        for(x=2;x>=j;x--)
        {
            printf(" *",x);
        }
        for(y=1;y<=j;y++)
        {
            printf("    ",y);
        }
        for(z=2;z>=j;z--)
        {
            printf(" *",z);
        }
        printf("\n");
    }
    return 0;
}