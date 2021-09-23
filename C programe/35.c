#include<stdio.h>
int main()
{
    int a1[100],a2[100],i,j,n,m;
    printf("Enter the no. of elements in 1st array \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    printf("Enter the no. of elements in 2nd array \n");
    scanf("%d",&m);
    for(j=0;j<m;j++){
        scanf("%d",&a2[j]);
    }
    if(a1[0]==a2[0]||a1[n]==a2[m]){
        printf("1");
    }
    else{
        printf("0");
    }
}