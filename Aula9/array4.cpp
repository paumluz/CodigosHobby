#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,soma;
	int A[5];
	
	soma = 0;
	
	for(i=0;i<6;i++)
	{
		printf("Informe um numero inteiro: \n");
		scanf("%d", &A[i]);
			
	}
	
	soma+=(A[0] + A[1] + A[5]);
	
	printf("\nA soma da posicao 0, 1 e 5 eh: %d", soma);
	
	A[4] = 100;
	
		for(i=0;i<6;i++)
	{
		printf("\nNumero na posicao %d do vetor: %d", i, A[i]);	
	}
	
	
	return 0;
}
