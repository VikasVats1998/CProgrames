#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("Enter the three noi.\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==13){
        sum=b+c;
        printf("Sum is %d",sum);
    }
    else if(b==13)
    {
        sum==a+c;
        printf("Sum is %d",sum);
    }
    else if(c==13)
    {
        sum=a+b;
        printf("Sum is %d",sum);
    }
    else{
        sum=a+b+c;
        printf("Sum is %d",sum);
    }
    
    }