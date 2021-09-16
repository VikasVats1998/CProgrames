#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    if((a>=100&&a<=200)||(b>=100&&b<=200))
        printf("1");
    else
        printf("0");

}

