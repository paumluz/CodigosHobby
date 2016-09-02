#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	float n1, n2, n3, maior, menor, n4, media, dez;
	dez = 10;

	
		printf("Digite a nota 1: \n");
		scanf("%f", &n1);
			
				printf("\nDigite a nota 2: \n");
				scanf("%f", &n2);
				
					printf("\nDigite a nota 3: \n");
					scanf("%f", &n3);
					
							printf("\nO aluno fez todos os exercicios? 1 para SIM e 0 para NAO \n");
							scanf("%f", &n4);
								
							
	media = (n1+n2+n3)/3;						
	
	printf("\nA media do Aluno eh: %.2f \n", media); //If para verificar qual o maior
	
		if(n1>n2 && n1>n3)
		{
			maior = n1;
		}
			else if(n2>n1 && n2>n3)
			{
				maior = n2;
			}
				else if(n3>n1 && n3>n2)
				{
				maior = n3;	
				}
					
					else if(n1==n2 && n1==n3)
					{
						printf("Todas ou Duas notas sao iguais, nao possuem maior ou nao possuem menor\n!");
					}
			
			if(n1<n2 && n1<n3) //If para verificar qual o menor
		{
			menor = n1;
		}
			else if(n2<n1 && n2<n3)
			{
				menor = n2;
			}
				else if(n3<n1 && n3<n2)
				{
				menor = n3;	
				}
					
					else if(n1==n2 && n1==n3)
					{
						printf("Todas ou Duas notas sao iguais, nao possuem maior ou nao possuem menor\n!");
					
					}
		
			
			printf("\n A maior nota eh: %.2f", maior); //mostra valores "maior e menor"
		
			printf("\n A menor nota eh: %.2f", menor);
		
				printf("\nA media do Aluno sem a Maior Nota eh: %.2f \n", ((n1+n2+n3)- maior)/2); //calcula media sem a maior nota, somando as 3 notas, diminuindo a menor e dividindo por 2
				
				if(n4==1 && media <=9)
				{
					printf("\nAluno fez todos Exercicios, +1 ponto na media: %.2f \n", media+1);
				
				}
					else if(n4==1 && media>9)
					{
					 printf("\n Media nao pode ser maior do que 10, entao nova media: %.2f", dez);	
					}
						else
						{
						printf("\n Aluno nao fez todos os exercicios, media continua igual: %.2f \n", media);
						}
	return 0;
					
}	

