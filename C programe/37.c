#include<stdio.h>
int main(){
    int array[4],temp,i;
    printf("Enter the four array elements");
    for(i=0;i<4;i++)
    {
        scanf("%d",&array[i]);
    }
    array[0]=temp;
    temp=array[4];
    for(i=0;i<4;i++){
        printf("\n%5d",array[i]);
    }

}