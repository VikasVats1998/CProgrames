#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    c=abs(a);
    d=abs(b);
    if(c%10==d%10){
        printf("1");
    }
    else
        printf("0");
}

