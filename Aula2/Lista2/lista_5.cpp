#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numeroA, numeroB;
			numeroA = 0;
				numeroB=0;
	
	printf("Digite um numero inteiro: \n");
		scanf("%d", &numeroA);
			printf("Digite um novo numero inteiro: \n");
				scanf("%d", &numeroB);
					printf("Numeros na ordem inversa: %d e %d \n", numeroB, numeroA);
	
	return 0;
}
