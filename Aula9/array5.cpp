#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,x,y;
	int num[7];
	
	for(i=0;i<8;i++)
	{
		printf("Informe um numero inteiro: \n");
		scanf("%d", &num[i]);
	}
	
	do{
	printf("\nDigite uma posicao X no vetor: ");
	scanf("%d", &x);
	}while(x>7);
	
	do{
	printf("\nDigite outra posicao Y no vetor: ");
	scanf("%d", &y);
	}while(y>7);
	
	printf("\nNumero na  %da posicao do vetor: %d", x, num[x]);	
	printf("\nNumero na  %da posicao do vetor: %d", y, num[y]);
	printf("\nSoma dos valores nas posicoes %d e %d: %d", x,y, (num[x]+num[y]));
	
	return 0;
}
