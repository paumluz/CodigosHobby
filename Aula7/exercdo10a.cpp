#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n1,par,imp,tre,cin;
	n1=1;
	par=0;
	imp=0;
	tre=0;
	cin=0;
	
	do
	{
		printf("%d\n", n1);
		
		if(n1%2 == 0)
		{
		par++;
		}
		
		if(n1%2 != 0)
		{
		imp++;
		}
		
		if(n1%3 == 0)
		{
		tre++;
		}
		
		if(n1%5 == 0)
		{
		cin++;
		}
		
		
		n1++;
	}while(n1<=80);
	
	printf("\n Total de numeros PARES: %d\n", par);
	printf("\n Total de numeros IMPARES: %d\n", imp);
	printf("\n Total de numeros MOD TRES: %d\n", tre);
	printf("\n Total de numeros MOD CINCO: %d\n", cin);
	
	system("pause");
	return 0;
}
