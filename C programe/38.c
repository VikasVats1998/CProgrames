#include<stdio.h>
int main(){
    int array[100],i,j;
    printf("Enter the array elements\n");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nArray in forward order");
    for(i=0;i<5;i++)
    {
        printf("%d",array[i]);
    }
    printf("\nArray in reverse order");
    for(i=4;i>=0;i--){
        printf("%d",array[i]);
    }
   
}