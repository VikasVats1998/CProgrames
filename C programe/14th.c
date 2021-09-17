#include<stdio.h>
int main(){
    int array[10],n,i,c=0;
    printf("Enter the no of array elements\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=1;i<n;i++)
    {   
        if((array[i]==1)&&(array[i+1]==2)&&(array[i+3]=3))
        {
            printf(c++);
           
        }
        
    }


   

}