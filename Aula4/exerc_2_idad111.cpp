#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int idade;
	printf("Digite a idade da pessoa: \n");
	scanf("%d", &idade);
	
	if(idade >= 0 && idade <=15)
	{
		printf("\nFaixa Etaria: PRIMEIRA!\n ");
	}
	
		else if(idade >= 16 && idade <=30)
		{
		printf("\nFaixa Etaria: SEGUNDA\n ");
		}
		
			else if(idade >= 31 && idade <=45)
			{
			printf("\nFaixa Etaria: TERCEIRA\n ");
			}
			
				else if(idade >= 46 && idade <=60)
				{
				printf("\nFaixa Etaria: QUARTA\n ");
				}
				
				else if(idade > 60 && idade <=140)
				{
				printf("\nFaixa Etaria: QUINTA\n ");
				}
					
			else if(idade<0)
			{
			printf("\nIdade Invalida!\n ");
			}
			
		if(idade>140)
		{
		printf("\nEssa pessoa ja morreu.\n ");
		}
		
			system("pause");
			return 0;
			
			}
