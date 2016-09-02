#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i;
	int num[5];
	
	for(i=0;i<6;i++)
	{
		printf("Informe um numero inteiro: \n");
		scanf("%d", &num[i]);
		
	}
	
	for(i=5;i>=0;i--)
	{
		printf("\nNumero na posicao %d do vetor: %d", i, num[i]);	
	}
	
	return 0;
}
