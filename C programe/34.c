#include<stdio.h>
int main(){
    int array[100],i,n;
    printf("Enter the no. array elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    // 
    if(array[0]==array[n])
    {
        printf("1");
    }
    else{
        printf("0");
    }
}