#include <stdio.h>
#include <stdlib.h>

int main()
{
	float idade, preco, desconto;
	idade = 0;
		preco = 0;
			desconto = 0.05;
			
			printf("Digite o preço oringinal: \n ");
				scanf("%f", &preco);
				
					printf("\n Digite a idade do cliente: \n");
						scanf("%f", &idade);
						
							printf("\n O desconto eh: %.2f por cento \n", (idade*desconto));
	
	return 0;
}

