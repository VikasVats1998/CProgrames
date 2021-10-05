#include<stdio.h>
int main(){
    int array[100],i,j,n,sum;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the size of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(j=0;j<n;j++){
        if(array[j]==17){
            array[j]=0;
        }
        else{
            sum=sum+array[j];
        }
    }
    printf("Sum of values in the array of integers except the number 17: %d ",sum);

}