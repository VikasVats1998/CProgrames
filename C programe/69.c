#include<stdio.h>
int main(){
    int array[100],i,n,a2[100],m;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("\nEnter the array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Elements in original array : ");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    printf("New array :");
      
    for(i=0;i<n;i++){
        
        if(array[i]==5)
        {
            m=i;
            break;
        }
        else{
            a2[i]=array[i];
        }
    }
    for(i=0;i<m;i++){
        printf("%2d",a2[i]);
    }
}