#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,pares;
	int ve[9];
	
	pares = 0;
	
	for(i=0;i<10;i++)
	{
		printf("Informe um numero inteiro: \n");
		scanf("%d", &ve[i]);
			if(ve[i]%2 == 0)
			{
				pares++;
			}
			
	}
	
	printf("\nNumero de pares digitados: %d", pares);
	
	return 0;
}
