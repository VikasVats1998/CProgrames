#include<stdio.h>
int main(){
    int a1[100],a2[100],i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++){
        a2[i]=a1[i];
    }
    a2[0]=a1[n-1];
    a2[n-1]=a1[0];
    printf("\nAfter swaping\n");
    for(i=0;i<n;i++){
        printf("%4d",a2[i]);
    }

   
}