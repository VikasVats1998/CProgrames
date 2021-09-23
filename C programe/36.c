#include<stdio.h>
int main(){
    int array[100],i,j,n,sum;
    printf("Enter the no. of array elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
     for(j=0;j<n;j++){
         sum=sum+array[j];
          
     }
      printf("Sum is %d ",sum);
       
}