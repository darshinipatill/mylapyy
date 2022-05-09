#include<stdio.h>

void even_numbers(int arr[])
{
    for (int i=0; i<10; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10}, i;
    
    printf("\nAll Even Array elements are:\n");
   // for(i=0; i<10; i++)
   // {
      //  if(arr[i]%2==0)
      //  {
       //     printf("%d ", arr[i]);
       // }
   // }
   even_numbers(arr);
       return 0;
}