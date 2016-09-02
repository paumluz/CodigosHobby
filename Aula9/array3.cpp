#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,media;
	int num[4];
	
	for(i=0;i<5;i++)
	{
		printf("Informe um numero inteiro: \n");
		scanf("%d", &num[i]);
		media+=num[i];
		
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nNumero na posicao %d do vetor: %d", i, num[i]);	
	}
	
	printf("\nA media do vetor eh: %d", media/5);
	
	return 0;
}
