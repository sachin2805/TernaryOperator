#include<stdio.h>
int main()
{
    int a[10][10] , min;
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
        min>a[i][j]?min=a[i][j]:printf("");
    }
    printf("\nThe Smallest number in given matrix is = %d",min);

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\TernaryOperator> gcc minimum5-5.c
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
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25

Given matrix is
1       2       3       4       5
6       7       8       9       10
11      12      13      14      15
16      17      18      19      20
21      22      23      24      25

The Smallest number in given matrix is = 1
PS F:\PROFOUND\PRACTICAL\TernaryOperator>
*/