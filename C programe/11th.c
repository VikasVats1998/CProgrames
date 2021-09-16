#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    if((a>=40&&a<=60)||(b>=40&&b<=60))
        printf("1");
    else
        printf("0");

}

