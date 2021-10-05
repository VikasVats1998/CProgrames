#include<stdio.h>
int main(){
    int array[100],i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("\nEnter the elements of array \n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]==5)
        continue;
        printf("%d",array[i]);
    }
}