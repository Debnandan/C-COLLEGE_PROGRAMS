#include <stdio.h>
int main()
{
   int num[]={9,6,1,3,7}, i, j ,temp;
   for (i = 0; i < 5; i++)
   {
      for (j = i + 1; j < 5; j++)
      {
         if (num[i] > num[j])
         {
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;
         }
      }
   }
   printf("max element of an array = %d",num[5]);
   return 0;
}
