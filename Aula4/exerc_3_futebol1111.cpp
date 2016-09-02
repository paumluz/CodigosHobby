#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int vit, der, emp;
	
	printf("Digite o numero de vitorias do seu Time: \n");
	scanf("%d", &vit);
		
		printf("Digite o numero de derrotas do seu Time: \n");
		scanf("%d", &der);
			
			printf("Digite o numero de empates do seu Time: \n");
			scanf("%d", &emp);
			if(vit<0 || der<0 || emp<0)
			{
			printf("\nValores Fora do Padrao!\n");
			}
			
		
			if(vit >= 0 && vit <= 10 && der>40 && emp>20)
			{
				printf("\nClassificacao: PESSIMO!\n");
			}
					else if(vit >= 11 && vit <= 20 && der>=31 && der<=40 && emp>=15 && emp<=20)
					{
					printf("\nClassificacao: RUIM!\n");
					}
							else if(vit >= 21 && vit <= 30 && der>=21 && der<=30 && emp>=10 && emp<=14)
							{
							printf("\nClassificacao: REGULAR\n");
							}
							
					else if(vit >= 31 && vit <= 40 && der>=11 && der<=20 && emp>=5 && emp<=9)
					{
					printf("\nClassificacao: BOM!\n");
					}		
					
			else if(vit >40 && der>=0 && der<=10 && emp>=0 && emp<=4)
			{
			printf("\nClassificacao: EXCELENTE!\n");
			}	
			
		else
		{
		printf("\nFora do Padrao!\n");
		}
			
			system("pause");
			return 0;
				
}	
