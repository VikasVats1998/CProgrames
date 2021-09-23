#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter two no.\n");
    scanf("%d%d",&a,&b);
    
    if((a%5==b%5)&&(a>10&&a<99)&&(b>10&&b<99))
    {
        printf("1");
    }
    else{
        printf("0");
    }
}