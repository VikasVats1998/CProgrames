#include<stdio.h>
int main(){
    int array[100],i,n,mid;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    if(n%2==1){
        printf("\nEnter the array elements\n");
        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
        }
        mid=n/2;
        for(i=0;i<n;i++){
            array[mid];
        }
        printf("%d",array[mid]);

        printf("\nNew array :");
        int new[]={array[0],array[mid],array[n-1]};
        for(i=0;i<3;i++){
            printf("%4d",new[i]);
        }

    }
}