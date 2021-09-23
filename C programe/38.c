#include<stdio.h>
int main(){
    int array[100],i,j,n;
    printf("Enter the no of array elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nArray in forward order");
    for(i=0;i<n;i++)
    {
        printf("%d",&array[i]);
    }
    printf("\nArray in reverse order");
    for(j=n;j>0;j--)
    {
        printf("%d",&array[j]);
    }
}