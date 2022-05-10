#include <stdio.h>
void add_array(int arr1[], int arr2[], int sum[])
{
   int i;
   for (i = 0; i < 3; i++)
   {
      sum[i] = arr1[i] + arr2[i];

      printf(" %d ", sum[i]);
   }
}
int main()
{

   int arr1[] = {1, 2, 3}, arr2[] = {4, 5, 6}, sum[3];

   printf("The total is  ");

   add_array(arr1, arr2, sum);
   return 0;
}