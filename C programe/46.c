#include<stdio.h>
int main(){
    int array[100],i,n,mid,count=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    if(n%2==0){
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        count++;
    }
    
    mid=count/2;
    printf("New array : %2d%2d",mid,mid+1);
    }
    
}