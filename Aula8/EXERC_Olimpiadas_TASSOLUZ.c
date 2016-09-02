#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int i,j,a,aux,c1;
	
	printf("Digite o numero de Atletas: \n");  //Leitura do numero de atletas;
	scanf("%d", &a);
	
	
	if(a<=0) //Encerra o programa caso seja negativo ou 0;
	{
		printf("Numero invalido! Digite um numero Positivo!");
		return 0;
	}
	
	aux = a;  //Auxiliar, conta quantos Atletas faltam ir para a FILA;
	c1=1; //Contador, conta quantos Atletas j� foram para a FILA;
	
	for(i=1;i<=aux;i++)  //Loop que vai dar uma nova linha toda vez que o n�mero de atletas em uma linha for igual ao n�mero da mesma
	{
			for(j=1;j<=i;j++)  //Loop que imprime um Atleta novo toda vez que o IF for verdadeiro
			{	
				if(c1<=a)  // If que imprime um atleta se o numero de atletas que j� foram para a fila for menor ou igual que o total.
				{
				printf("-|-");
				c1++;				//Toda vez que um atleta vai para a fila, o contador aumenta em 1.
				aux--;				// Toda vez que um atleta vai para a fila, o n�mero de atletas sem posi��o na fila diminui em 1.
				}
			}
	printf("\n");      //Nova linha toda vez que o Loop do i termina.
	}
	
	printf("\nFilas completas: %d", i-1);  // Filas completas � o numero de loops do i -1, pois o 1 j� come�a em 1.
	printf("\nAtletas que sobraram: %d\n", aux); // Atletas que sobraram � o numero de atletas sem fila depois que o loop rodou.
	system("pause");
	return 0;
}
