#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i;
	int A[9];
	int B[9];
	int C[9];
		
	
	for(i=0;i<10;i++)
	{
		printf("\nVETOR A: Informe um numero inteiro: \n");
		scanf("%d", &A[i]);
	}
	
			for(i=0;i<10;i++)
			{
				printf("\nVETOR B: Informe um numero inteiro: \n");
				scanf("%d", &B[i]);		
			}
	
				for(i=0;i<10;i++)
				{
					C[i] = (A[i] - B[i]);
				}
	
	for(i=0;i<10;i++)
	{
	printf("\n%da Posicao do VETOR C: %d",i+1, C[i]);
	}	
	return 0;
}
