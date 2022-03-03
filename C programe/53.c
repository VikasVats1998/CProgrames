#include<stdio.h>
int main(){
    int array[100],n,i,count=0,sum=0;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("\nEnter the array elements \n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if (array[i] == 5) count = 1;
        else if (count && array[i] == 6) count = 0;
        else if (!count) sum += array[i];
    }
    printf("Sum is : %d",sum);
}

































// #include <stdio.h>
// #include <stdlib.h>

// int main(void){
//     int array1[] = {2, 5, 9, 10, 17};
//     int arr_size = sizeof(array1)/sizeof(array1[0]);
//     printf("Sum of values in the array of integers except those numbers starting with 5 followed by atleast one 6: ");
//     printf("%d",test(array1, arr_size));
//   }    
//   int test(int nums[], int arr_size)
//          {
//             int sum = 0;
//             int inSection = 0;
//             for (int i = 0; i < arr_size; i++)
//             {
//                 if (nums[i] == 5) inSection = 1;
//                 else if (inSection && nums[i] == 6) inSection = 0;
//                 else if (!inSection) sum += nums[i];
//             }
//             return sum;
//          }
