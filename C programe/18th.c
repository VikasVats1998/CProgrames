#include<stdio.h>
int main()
{
    int a,b,diff,sum;
 printf("Enter two no.");
 scanf("%d%d",&a,&b);
  diff=abs(a-b);
  sum=a+b;
  if((a==5)||(b==5)||(diff==5)||(sum==5)){
    printf("1");
  }
  else
  {
      printf("0");
  }

}
