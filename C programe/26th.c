#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three no.\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a==20||b==20||c==20)||(a>b>c))
    {
        printf("1");
    }
    else{
        printf("0");
    }
}
