#include<stdio.h>
int main(){
    int array[100],i,n,c1=0,c2=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the size of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]==3){
            c1++;
        }
        else if(array[i]==5){
            c2++;
        }
    }
    if(c1>c2){
        printf("1");
    }
    else{
        printf("0");
    }

}