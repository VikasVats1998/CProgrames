#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,x,y;
    printf("Enter two no.");
    scanf("%d%d",&a,&b);
    x=abs(100-a);
    y=abs(100-b);
    if(x<y){
        printf("%d",a);
    }
    else if(x=y){
        printf("0");
    }
    else{
        printf("%d",b);
    }

}
