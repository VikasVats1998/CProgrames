#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three no.");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=20&&a<=50)||(b>=20&&b<=50)||(c>=20&&c<=150))
       {
            printf("true");
       }
    else
        {
            printf("false");

        }
}

