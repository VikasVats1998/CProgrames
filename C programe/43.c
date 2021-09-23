#include<stdio.h>
int main(){
    int array[10],i,count=0;
    printf("Enter the array elements\n");
    for(i=0;i<2;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<2;i++){
        if(array[i]==10||array[i+1]==10||array[i+2]==10||array[i]==20||array[i+1]==20||array[i+2]==20)
        {
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