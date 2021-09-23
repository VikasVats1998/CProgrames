#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Enter three no.\n");
    scanf("%d%d%d",&a,&b,&c);
    a<b&&a<c;
    b>a&&b<c;
    c>a&&c>b;

    if(abs(a-b)==(abs(b-c)))
    {
        printf("1");
    }
    else{
        printf("0");
    }


}