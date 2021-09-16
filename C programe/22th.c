#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter the no.");
    scanf("%d%d",&a,&b);
    sum=a+b;
    if((a>=10&&a<=20)||(b>=10&&b<=20)){
        printf("18");
    }
    else{
        printf("%d",sum);
    }
}
