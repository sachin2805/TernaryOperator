#include<stdio.h>
int main()
{
       int a[50] ,n,i;
    printf("\n\nEnter the number count in array = ");
    scanf("%d",&n);
    
    printf("\n\nEnter the numbers = \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);

     printf("\n\nPositive numbers in the array are =");
    for(i=1;i<=n;i++)
    { 
         a[i]>0?printf("\t%d",a[i]):printf("");
    }
    printf("\n\nNegative numbers in the array are =");
     for(i=1;i<=n;i++)
    { 
         a[i]<0?printf("\t%d",a[i]):printf(""); 
     }
     printf("\n\nZero or neutral in array =");
     for(i=1;i<=n;i++)
     {
    a[i]==0?printf("\t%d",a[i]):printf("");
	}
     printf("\n\nEven number in array are =");
     for(i=1;i<=n;i++)
    {
     a[i]%2==0?printf("\t%d",a[i]):printf("");
	}
    printf("\n\nOdd number in array are =");
      for(i=1;i<=n;i++)
    {
	  a[i]%2!=0?printf("\t%d",a[i]):printf("");
     }
   return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\TernaryOperator> gcc +-evenoddarray.c
PS F:\PROFOUND\PRACTICAL\TernaryOperator> ./a.exe


Enter the number count in array = 10


Enter the numbers = 
-10    
-13
14
-15
-16
-17
18
0
19
-32


Positive numbers in the array are =     14      18      19

Negative numbers in the array are =     -10     -13     -15     -16     -17     -32

Zero or neutral in array =      0

Even number in array are =      -10     14      -16     18      0       -32

Odd number in array are =       -13     -15     -17     19
PS F:\PROFOUND\PRACTICAL\TernaryOperator> 
*/