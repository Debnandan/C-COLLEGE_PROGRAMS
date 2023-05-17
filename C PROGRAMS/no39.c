#include <stdio.h>
int main()
{
   int num[100], i, j, lim, temp;
   printf("enter limit of array : ");
   scanf("%d", &lim);
   for (i = 0; i < lim; i++)
   {
      printf("enter %d number ", i + 1);
      scanf("%d", &num[i]);
   }
   for (i = 0; i < lim; i++)
   {
      for (j = i + 1; j < lim; j++)
      {
         if (num[i] > num[j])
         {
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;
         }
      }
   }
   for (i = 0; i < lim; i++)
   {
      printf("%d\t", num[i]);
   }
   return 0;
}