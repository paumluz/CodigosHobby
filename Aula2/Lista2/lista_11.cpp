#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numeroA, numeroB, numeroC;
			numeroA = 0;
				numeroB=0;
					numeroC=0;
	
	printf("Digite um numero inteiro: \n");
		scanf("%d", &numeroA);
			
			printf("Digite um novo numero inteiro: \n");
				scanf("%d", &numeroB);
					
					printf("Digite um novo numero inteiro: \n");
						scanf("%d", &numeroC);
					
	printf("Numeros %d || %d || %d \n", numeroA, numeroB, numeroC);
	
	return 0;
}

