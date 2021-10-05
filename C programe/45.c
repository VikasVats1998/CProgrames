#include<stdio.h>
int main(){
    int a1[3],a2[3],i,j,s1,s2;
    printf("Enter the elemeents of 1st array\n");
    for ( i = 0; i < 3; i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("\nEnter the elements of 2nd array\n");
    for(j=0;j<3;j++){
        scanf("%d",&a2[j]);
    }

    for(i=0;i<3;i++){
        s1=s1+a1[i];
    }
    for(j=0;j<3;j++){
        s2=s2+a2[j];
    }
    if(s1>s2){
        for(i=0;i<3;i++){
            printf("%2d",a1[i]);
        }
        }
        else{
             for(j=0;j<3;j++){
                 printf("%2d",a2[j]);
             

        }
    }
}