#include<stdio.h>
int main()
{
	int a;
	printf("enter the any number = ");
	scanf("%d",&a);
	 a!=0?(a%2==0?printf("\ngiven number %d is even number\n ",a):printf("\ngiven number %d is odd number \n ",a)):printf("\ngiven number %d is zero or neutral\n ",a);
	return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\TernaryOperator> gcc evenodd.c
enter the any number = 10

given number 10 is even number

PS F:\PROFOUND\PRACTICAL\TernaryOperator> ./a.exe      
enter the any number = 15

given number 15 is odd number

PS F:\PROFOUND\PRACTICAL\TernaryOperator> ./a.exe      
enter the any number = 0

given number 0 is zero or neutral

PS F:\PROFOUND\PRACTICAL\TernaryOperator>
*/