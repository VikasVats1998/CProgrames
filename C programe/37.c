#include<stdio.h>
int main(){
    int a1[4],i,j;
    printf("Enter the array elements\n");
    for(i=0;i<4;i++){
        scanf("%d",&a1[i]);
    }
    for(i=0;i<4;i++){
        printf("%2d",a1[i]);
    }
    printf("\nAfter swaping\n");
   int a2[4]={ a1[1], a1[2], a1[3], a1[0] };
    for(j=0;j<4;j++){
        printf("%2d",a2[j]);
    }

}