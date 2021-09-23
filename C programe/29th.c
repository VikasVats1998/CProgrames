#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the three no.");
    scanf("%d%d%d",&a,&b,&c);
    if(a!=b&&b!=c&&c!=a)
    {
        sum=a+b+c;
        printf("Sum is %d",sum);
    }
    else{
        printf("Third no. is %d",c);
    }
}