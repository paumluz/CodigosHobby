#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1, n2;
			n1 = 0;
				n2 = 0;
	
	printf("Digite um numero: \n ");	
	  scanf("%d", &n1);
		
	printf("\n Digite um segundo numero: \n");	
	  scanf("%d", &n2);
	  
	printf("Soma dos numeros: %d \n", (n1+n2));
			printf("Produto dos numeros: %d \n", (n1*n2));
					printf("Diferenca dos numeros: %d \n", (n1-n2));
	
	return 0;
}
