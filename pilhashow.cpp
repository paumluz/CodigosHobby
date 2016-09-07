#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

//Variaveis globaisss shows
int pilha[10];
int topo;


//Percorre o vetor da pilha e zera tudo, topo � -1 para inicializar
void Inicializa() 
{
	int i =0;
	topo = -1;
	
	for(i=0; i<10;i++)
	{
		pilha[i] = 0;
	}
	
	printf("\nPilha inicializada!");
}

//verifica se o topo � diferente de vazio (-1), se for, copia o valor q est� l� e o retorna, dai decrementa o topo para uma posi��o anterior.
int Desempilha() 
{
	int valor;
	
	if(topo != -1)
	{	
		printf("Topo era: %d", topo);
		valor = pilha[topo];
		topo--;
		return valor;
	}
	printf("\nPilha vazia!");
	return NULL;
}

//ve se tem um espa�o vazio na pilha, se tiver, da um incremento no topo para ele apontar para o mais alto, le o valor num do usuario e o coloca no topo da pilha
void Empilha(int num) 
{
	if(topo < 9)
	{
		topo++;
		pilha[topo] = num;
	}
	else
	{
	   printf("\nPilha cheia!");
	}
}

//Um for que ta lendo e imprimindo o vetor
void ImprimePilha()
{
	int i;
	for(i=topo; i>=0;i--)
	{
		printf("\nPosicao: %d || Valor: %d\n", i, pilha[i]);
	}
}

int main()
{
	Inicializa();
	printf("\nValor que estava no topo da pilha: %d", Desempilha());
	Desempilha();
	Empilha(5);
	ImprimePilha();
	return 0;
}
