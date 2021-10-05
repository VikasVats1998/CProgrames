#include<stdio.h>
int main(){
    int array[100],i,n;
    printf("Enter thee size of array : ");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\nYour array \n");
    for(i=0;i<n;i++){
        printf("%4d",array[i]);
    }
    int new[]={array[0],array[n-1]};
    printf("\nNew array : \n");
    for(i=0;i<2;i++){
        printf("%4d",new[i]);
    }

    
}