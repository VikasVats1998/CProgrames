#include<stdio.h>
int main()
{
    int a;
    printf("Enter the no.");
    scanf("%d",&a);
    if(a%3==0 ^ a%7==0)
    {
        printf("1");
    }
    else{
        printf("0");
    }

}


