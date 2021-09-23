#include<stdio.h>
int main(){
    int array[100],i,n,a2[2],j;
    printf("Enter the no of array elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    a2[0]=array[0];
    a2[1]=array[n-1];
    for(j=0;j<2;j++)
    {
        printf("%5d",a2[j]);
    }

    
}