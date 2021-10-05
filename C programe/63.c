#include<stdio.h>
int main(){
    int array[100],i,n,c1=0,c2=0;
    printf("Enter the sizee of array\n");
    scanf("%d",&n);
    printf("Enter the array element\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]%2==0){
            c1++;
        }
        else if(array[i]%2==1){
            c2++;
        }
    }
    if(c1==2 && c2==2){
        printf("1");
    }
    else{
        printf("0");
    }
}