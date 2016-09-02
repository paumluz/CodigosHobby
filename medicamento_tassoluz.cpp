#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h> 

struct medicamento
{
	char nome[30];
	int vmes,vano;
	char receita[20];
	int qnt;
	char tipo[20];
	char ads[20];
};

medicamento vetor[10];
int i;
	
int prVetor(medicamento vetor[10])
{
	for(i=0;i<1;i++)
	{
		printf("\nMEDICAMENTO (%d)\n", i+1);
		
		printf("\nInforme o Nome: \n");
		setbuf(stdin,NULL);
		gets(vetor[i].nome);
		
		do{
		printf("\nInforme o Número do Mês da Data De Validade: \n");
		scanf("%d", &vetor[i].vmes);
		}while(vetor[i].vmes < 1 || vetor[i].vmes > 12);
		
		do{
		printf("\nInforme o Ano da Data De Validade: \n");
		scanf("%d", &vetor[i].vano);
		}while(vetor[i].vano < 1 || vetor[i].vano > 9999);
		
		printf("\nReceita Controlada ou Não Controlada?\n");
		setbuf(stdin,NULL);
		gets(vetor[i].receita);
		
		printf("\nInforme a Quantitade de Administrações Diárias: \n");
		scanf("%d", &vetor[i].qnt);
		
		printf("\nInforme o Tipo do Medicamento (Líquido ou Comprimido): \n");
		setbuf(stdin,NULL);
		gets(vetor[i].tipo);
		
		printf("\nInforme o Modo de Administração: \n");
		printf("Com Água // Com Refeição // Independente \n");
		setbuf(stdin,NULL);
		gets(vetor[i].ads);
	
		system("cls");
	}
}

	int CNome(medicamento vetor[10])
	{
		char nomeC[30];
		printf("\nInforme o Nome do Medicamento que deseja consultar: \n");
		setbuf(stdin,NULL);
		gets(nomeC);
		
		for(i=0;i<1;i++)
		{
			if(strcmp(nomeC,vetor[i].nome) == 0)
			{
				printf("\nDADOS DO MEDICAMENTO: \n");
				printf("\nNome: %s \n", vetor[i].nome);
				printf("\nValidade: %d / %d\n", vetor[i].vmes, vetor[i].vano);
				printf("\nTipo de Receita: %s", vetor[i].receita);
				printf("\nQuantidade Diária: %d", vetor[i].qnt);
				printf("\nTipo de Medicamento: %s", vetor[i].tipo);
				printf("\nModo de Administração: %s", vetor[i].ads);
			}
			
			else if(strcmp(nomeC,vetor[i].nome) != 0)
			{
				printf("\nERRO! Medicamento Inexistente!");
			}
		}
	}

int main()
{
	 setlocale(LC_ALL, "Portuguese");
	 medicamento vetor2[10];
	 char nome[30];
	 
	 prVetor(vetor2);
	 CNome(vetor2);
	
	
	return 0;
}
