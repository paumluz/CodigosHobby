#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()

{
	int x, n1, Tu, Ei, Nu;
	float Br, BrP;
	
	n1=0;
	x=0;
	Ei=0;
	Tu=0;
	Nu=0;
	Br=0;
	BrP=0;
	
	for(x=0;n1!=5;x++)
	{
		printf("Digite 1 para EINSTEIN: \n");
		printf("Digite 2 para TURING: \n");
		printf("Digite 3 para NULO: \n");
		printf("Digite 4 para BRANCO: \n");
		printf("Digite 5 para SAIR: \n");
		printf("----------------------------\n");
		scanf("%d",&n1);
		
			switch(n1)
			{
				case 1:
				Ei++;
				break;
				
				case 2:
				Tu++;
				break;
				
				case 3:
				Nu++;
				break;
				
				case 4:
				Br++;
				break;
				
				case 5:
				printf("\n Votacao Encerrada!");
				break;
				
				default:
				printf("\n Numero invalido!");
				break;
				
				
			}
		
	}
	
	BrP = (Br/x)*100;
	
	printf("\n Votos de Einstein: %d \n", Ei);
	printf("\n Votos de Turing: %d \n", Tu);
	printf("\n Votos Nulos: %d \n", Nu);
	printf("\n Percentual Votos em Branco: %.2f Por Cento \n", BrP);
	return 0;
}
