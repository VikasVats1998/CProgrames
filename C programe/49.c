#include<stdio.h>
int main(){
    int array[100],i,n;
    int arr_size1;
    arr_size1 = sizeof(array)/sizeof(array[0]);
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\nYour array\n");
    for ( i = 0; i < n; i++)
    {
        printf("%4d",array[i]);
    }
     int new[] = { array[arr_size1 / 2 - 1], array[arr_size1 / 2], array[arr_size1 / 2 + 1]} ;
     printf("\nNew array\n");
     for(i=0;i<3;i++){
         printf("%d",new[i]);
     }

    
}