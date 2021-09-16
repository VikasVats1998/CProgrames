#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    if((a>=20&&a<=30)&&(b>=20&&b<=30))
    {
        if(a>b){
          printf("%d",a);
        }

        else{

            printf("%d",b);
        }

    }

    else
        printf("0");

}

