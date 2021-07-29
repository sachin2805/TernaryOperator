#include<stdio.h>
int main()
{
    int a[50] ,i,n,b;
    printf("\n enter the number count in array = ");
    scanf("%d",&n);
    
    printf("\nEnter the numbers = \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

     printf("\nEnter the numbers whose u have to find and print the index= \n");
     scanf("%d",&b);
for(i=0;i<n;i++)
{
    b==a[i]? printf("Entered number by user is %d and this located at index is %d",b,i):printf("");
}
return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\TernaryOperator> gcc sercharray-printindex.c
PS F:\PROFOUND\PRACTICAL\TernaryOperator> ./a.exe

 enter the number count in array = 5

Enter the numbers = 
10
20
30
40
50

Enter the numbers whose u have to find and print the index=
20
Entered number by user is 20 and this located at index is 1
PS F:\PROFOUND\PRACTICAL\TernaryOperator>
*/