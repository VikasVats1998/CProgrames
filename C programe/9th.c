#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two no.\n");
    scanf("%d%d",&a,&b);
    if((a>=20&&a<50)||(b>=20&&b<=50))
        printf("true");
    else
        printf("false");
}
