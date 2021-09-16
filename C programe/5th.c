#include<stdio.h>
int main(){
    int n;
printf("Enter a no.");
scanf("%d",&n);
printf("%d",test(n));
}
int test(int n)
{
    return n%3==0 || n%7==0;
}

