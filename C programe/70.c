#include<stdio.h>
int main(){
    int array[100],i,n,a2[100],m;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("\nEnter the elements of array \n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\nNew array :");
    for(i=0;i<n;i++){
        if(array[i]==5)
        {
            m=i;
            
        }
        else{
            a2[i]=array[i];
        }
    }
    for(i=m+1;i<n;i++){
        printf("%4d",a2[i]);
    }
}