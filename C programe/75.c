#include<stdio.h>
int main(){
    int array[100],i,n,count=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]==15 && array[i+1]==15){
            count++;
        }
       
    }
    if(count>0){
        printf("1");
    }
    else{
        printf("0");
    }
}