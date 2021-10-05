#include<stdio.h>
int main(){
    int array[100],i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("\nEnter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Elements in original array : ");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    printf("New array :");
    for(i=0;i<n;i++){
        printf("%4d",array[i]);
        if(array[i]==5)
        break;
    }
}