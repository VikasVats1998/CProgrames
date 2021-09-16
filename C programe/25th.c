#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the no.");
    scanf("%d%d%d",&a,&b,&c);
    if((a%10==b%10)&&(b%10==c%10)&&(a%10==c%10))
    {
        printf("1");

    }
    else{
        printf("0");
    }
}

