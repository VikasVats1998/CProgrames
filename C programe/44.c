#include<stdio.h>
int main(){
    int array[10],i,n;
    printf("Enter the array elements\n");
    for(i=0;i<2;i++){
        scanf("%d",&array[i]);
    }
    for (i=0;i<2;i++)
    {
        if(array[i]==5&&array[i+1]==7)
        {
            array[i+1]=1;
        }
    }
    
    
}