#include<stdio.h>
int main()
{
    int a;
    printf("Enter the no.");
    scanf("%d",&a);
    if(a % 10 <= 2 || a % 10 >= 8){
        printf("1");
    }
    else{
        printf("0");
    }

}

