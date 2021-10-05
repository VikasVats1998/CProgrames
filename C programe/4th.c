#include<stdio.h>
int main()
{   
    int x;
    printf("Enter the no. : ");
    scanf("%d",&x);
    if(abs(x - 100) <= 10 || abs(x - 200) <= 10)
              {
                  printf("1");
              }
              else{
                  printf("0");
              }
}
