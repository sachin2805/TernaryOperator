#include<stdio.h>
int main()
{
       int a[50] ,n,i,b,f=0;
    printf("\n enter the number count in array = ");
    scanf("%d",&n);
    
    printf("\nEnter the numbers = \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);

    printf("\nEnter the any number which u have find presnet in array or not = ");
    scanf("%d",&b);

    for(i=0;i<=n;i++)
    {
        b==a[i]?f++:printf("");
     }
     f>0? printf("\n %d is prsent in the array",b):printf("\n %d is absent in the array",b);
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\TernaryOperator> gcc nopresentinarray.c
PS F:\PROFOUND\PRACTICAL\TernaryOperator> ./a.exe

 enter the number count in array = 5

Enter the numbers = 
10
20
30
40
50

Enter the any number which u have find presnet in array or not = 50

 50 is prsent in the array
PS F:\PROFOUND\PRACTICAL\TernaryOperator>
*/