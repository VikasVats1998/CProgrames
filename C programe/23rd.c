#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three no.");
    scanf("%d%d%d",&a,&b,&c);
    if((c=a+b)&&(a=b+c)&&(b=c+a))

       {
            printf("1");
       }


    else
      {
            printf("0");
      }

}

