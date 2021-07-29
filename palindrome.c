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
    sum=sum*10+r;
    n=n/10;
    }
   
        sum==temp?printf("\nGiven number is palindrome "):printf("\nGiven number is not palindrome ");
    
    return 0;
    
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc palindrome.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 Enter the number = 212

Given number is palindrome
PS F:\PROFOUND\PRACTICAL\c> gcc palindrome.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 Enter the number = 215

Given number is not palindrome
PS F:\PROFOUND\PRACTICAL\c>
*/