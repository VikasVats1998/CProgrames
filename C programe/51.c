#include<stdio.h>
int main(){
    int array[100],i,n,count=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]%2==0){
            count++;
        }
    }
    printf("%d",count);
}