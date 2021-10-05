#include<stdio.h>
int main(){
    int array[100],i,n,counter=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i+1]>array[i]){
            counter++;
        }
        
        break;
    }
    if(counter>0){
        printf("1");
    }
    else{
        printf("0");
    }
}