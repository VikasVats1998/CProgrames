
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,result;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    result=a+b;
    if(a==30 || b==30 || result==30)
        printf("1");

    else
        printf("0");

}
