#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,maior,menor;
	int X[9];
	
	maior = 0;
	menor = 1;
	
	for(i=0;i<10;i++)
	{
		printf("Informe um numero inteiro: \n");
		scanf("%d", &X[i]);
			
			if(maior<X[i])
			{
				maior = X[i];
			}
			
			if(menor>X[i])
			{
				menor = X[i];
			}
			
	}
	
	printf("\nMaior elemento do vetor: %d", maior);
	printf("\nMenor elemento do vetor: %d", menor);
	
	return 0;
}
