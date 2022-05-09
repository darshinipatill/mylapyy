#include <stdio.h> 
void array_reverse(int array[],int length){
    for (int i = length-1; i >= 0; i--) {   
        printf("%d ", array[i]);   
    }    
}
   
int main()  
{  
    //Initialize array   
    int array[] = {1, 2, 3, 4, 5};   
      
    //Calculate length of array arr  
    int length = sizeof(array)/sizeof(array[0]);  
      
    printf("Original array: \n");  
    for (int i = 0; i < length; i++) {   
        printf("%d ", array[i]);   
    }    
      
    printf("\n");  
      
    printf("Array in reverse order: \n");  
    //Loop through the array in reverse order  
   // for (int i = length-1; i >= 0; i--) {   
       // printf("%d ", arr[i]);   
    //} 
    array_reverse(array,length);
    return 0;  
}  