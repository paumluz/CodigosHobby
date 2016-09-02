#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dia, mes, ano;
			dia=0;
				mes=0;
					ano=0;
	
	printf("Digite o numero do dia de hoje: \n");
		scanf("%d", &dia);
			printf("\n Digite o numero do mes atual: \n");
				scanf("%d", &mes);
					printf("\n Digite o numero do ano atual: \n");
						scanf("%d", &ano);
					
				printf("Data de hoje: %d / %d / %d \n", dia, mes, ano);
	
	return 0;
}
