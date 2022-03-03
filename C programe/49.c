#include<stdio.h>
int main()
{
    int arr[100],new[100], i,n;
    printf("Enter the number of elements:n");
    scanf("%d",&n);
    printf("\nEnter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n%2==0)
    {
        n=n/2;
        for(i=0;i<3;i++)
        {
          new[i]=arr[n-1];
          n++;  
        }
    }
    else
    {   
        n+1;
        n=n/2;
        for(i=0;i<3;i++)
        {
            new[i]=arr[n];
            n++;
        }
    }
    printf("\nNew array :");
    for(i=0;i<3;i++)
    {
        printf("%d",new[i]);
    }
    

}