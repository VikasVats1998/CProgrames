#include<stdio.h>
int main(){
   int a1[5],a2[5],i,j;
   printf("Enter the 1st array \n");
   for(i=0;i<5;i++){
       scanf("%d",&a1[i]);
   }
   printf("Enter the 2nd array\n");
   for(i=0;i<5;i++){
       scanf("%d",&a2[i]);
   }
   int new[]={a1[2],a2[2]};
   printf("New array : ");
   for(i=0;i<2;i++){
       printf("%4d",new[i]);
   }

}