#include<stdio.h>
int main()
{
    int a,result,result2;
    printf("Enter the no.");
    scanf("%d",&a);
    result=abs(a);
    result2=result-1;
    if(result%13==0 || result2%13==0){
        printf("1");
    }
    else{
        printf("0");
    }


}


