#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	float valor, desconto, acre;
	
	printf(" Digite o valor da Prestacao atrasada: \n");
	scanf("%f", &valor);
	
		acre = valor + (valor/10);
		desconto = acre - (acre/10);
		
			printf("\n Valor com acresimo: %.2f \n", acre);
			printf("\n Valor final com desconto: %.2f \n", desconto);
			
			if(desconto>valor)
			{
				printf("\n Lucro! \n");
			}
				else
				{
					printf("\n Prejuizo! \n");
				}
				
			system("pause");
			return 0;
}
