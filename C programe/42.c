#include<stdio.h>
int main(){
    int array[10],i,count=0;
    printf("Enter the array elements");
    for(i=0;i<2;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<2;i++){
        if((array[i]==15)||(array[i]==20)||(array[i+1]==15)||(array[i+1]==20))
    {
        count++;
    }
    
    }
    if(count>0){
        printf("0");
    }
    else{
        printf("1");
    }
    
}