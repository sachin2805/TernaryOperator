#include<stdio.h>
int main()
{
    int n,r,temp,sum=0;
     printf("\n Enter the number = ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
    r=n%10;
     sum=sum+(r*r*r);
    n=n/10;
    }
     sum==temp?printf("\nGiven number is armstrong "):printf("\nGiven number is not armstrong ");
    
    return 0;
}