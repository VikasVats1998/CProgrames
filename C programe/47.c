#include<stdio.h>
int main(){
    int a1[3],a2[3],a3[6],i,j;
    char s1,s2;
    printf("Enter the 1st array\n");
    for(i=0;i<3;i++){
        scanf("%d",&a1[i]);
    }
    printf("Enter the 2nd array\n");
    for(j=0;j<3;j++){
        scanf("%d",&a2[j]);
    }

    for(i = 0; i < 3; i++)
  	{
      	a3[i] = a1[i];
  	}
 	for(i = 0, j = 3; j < 6 && i < 3; i++, j++)
  	{
  		a3[j] = a2[i];
  	}
 	printf("\n New array will be\n"); 
 	for(i = 0; i < 6; i++)
  	{
    	printf(" %2d ",a3[i]);
  	}
  
   

}