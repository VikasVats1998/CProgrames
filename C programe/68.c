#include<stdio.h>
int main(){
    int array[100],i,n,a2[100],temp;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    temp=array[0];
    for(i=0;i<n;i++){
        a2[i]=array[i+1];
    }
    a2[n-1]=temp;
    printf("\nNew array :");
    for(i=0;i<n;i++){
        printf("%2d",a2[i]);
    }
}