#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two no.\n");
    scanf("%d%d",&a,&b);
    if((a%5==b%5)&&(a!=b))
    {
        printf("1");
    }
    else{
        printf("0");
    }
}