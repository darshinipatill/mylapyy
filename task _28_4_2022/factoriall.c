#include <stdio.h>
void factorial_array(int num)
{
     for (int i = 1; i <= num; ++i) {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }

}
}
int main() {
    int num=100, i;
     
    //taking input from the user
    //store it in variable num.
     
        printf("Factors of %d are: ", num);
     
    //using for loop and iterating to each number till our actual value
    //then using if inside for loop to print our factors
     
    //for (i = 1; i <= num; ++i) {
      //  if (num % i == 0) 
        //{
          //  printf("%d ", i);
        //}
    //}
    factorial_array(num);
    return 0;
}