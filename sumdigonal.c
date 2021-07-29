#include<stdio.h>
int main()
{
    int a[3][3],sum=0;
    int i,j;
    printf("\nEnter the 3*3 matrix = \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             scanf("%d",&a[i][j]);
    }


      printf("\n the matrix =\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             printf("%d\t",a[i][j]);

             printf("\n");
     
    }
     
               for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            i==j?sum= sum + a[i][j]:printf("");  
        }
    }
     printf("\n the Sum of all digonal elements are =%d",sum);
   return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\TernaryOperator> gcc sumdigonal.c
PS F:\PROFOUND\PRACTICAL\TernaryOperator> ./a.exe

Enter the 3*3 matrix =
1
2
3
4
5
6
7
8
9

 the matrix =
1       2       3
4       5       6
7       8       9

 the Sum of all digonal elements are =15
PS F:\PROFOUND\PRACTICAL\TernaryOperator>
*/