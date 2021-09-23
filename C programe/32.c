#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    if(a>13||b>13)
    {
        printf("0");
    }
    else if(a<13||b<13){
        c=13-a;
        d=13-b;
        if(c>d)
        {
            printf("%d",b);
        }
        else{
            printf("%d",a);
        }

    }
}