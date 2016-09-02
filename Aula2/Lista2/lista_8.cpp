#include <stdio.h>
#include <stdlib.h>

int main()
{
	float numero;
			numero = 0;
	
	printf("Digite um numero: ");	
	  scanf("%f", &numero);
		printf("\n O quadrado do numero eh: %.2f \n", (numero*numero));
	
	return 0;
}
