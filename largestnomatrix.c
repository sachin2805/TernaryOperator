#include<stdio.h>
int main()
{
    int a[10][10] , max=0;
    int i,j;
    printf("\nEnter the matrix = \n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
             scanf("%d",&a[i][j]);
    }
    printf("\nGiven matrix is \n");
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
             printf("%d\t",a[i][j]);
             printf("\n");
    }
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        max<a[i][j]?max=a[i][j]:printf("");
    }
    printf("\nThe Smallest number in given matrix is = %d",max);

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\TernaryOperator> gcc largestnomatrix.c
PS F:\PROFOUND\PRACTICAL\TernaryOperator> ./a.exe

Enter the matrix = 
1
2
3
4
5
6
7
8
9
555
1
2
3
4
5
6
7
8
9
1
25
64
18
19
20

Given matrix is
1       2       3       4       5
6       7       8       9       555
1       2       3       4       5
6       7       8       9       1
25      64      18      19      20

The Smallest number in given matrix is = 555
PS F:\PROFOUND\PRACTICAL\TernaryOperator>  
*/