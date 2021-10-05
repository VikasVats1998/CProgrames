#include<stdio.h>
int main(){
    int a1[100],a2[100],i,n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++){
        a2[i]=a1[i];
    }
    a2[0]=a1[n];
    a2[n]=a1[0];
    printf("After swaping\n");
    for(i=0;i<n;i++){
        printf("%d",a2[i]);
    }

   
}