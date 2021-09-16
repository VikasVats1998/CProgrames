#include<stdio.h>
int main()
{
    int temp;
    printf("Enter the temperature\n");
    scanf("%d",&temp);
    if(temp<=0 || temp>=100)
        printf("1");
    else
        printf("0");

}

