#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,sum;
printf("Enter two numbers");
scanf("%d%d",&a,&b);

if(a==b){
    sum=a+b;
   sum=sum*3;
   printf("Sum is %d",sum);
}
else if(a!=b){
    sum=a+b;
    printf("Sum is %d",sum);
}
}
