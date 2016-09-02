#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//Nova classe processo
typedef struct Processo
{
	int pID;
	char nome[15];
	char usuario[10];
unsigned char tempoCPU; //n vai precisar de negativos entao usa o espaço pra positivos
	Processo *anterior;
}Processo;
//Protótipos das Funções sendo criadas com variáveis que serão definidas no main
Processo *alocacao(); //Alocação de uma variavel do tipo processo

Processo *inicializaPilha(Processo *pilha);//Inicizliação de uma Pilha do tipo Processo, esvazia retorna uma pilha;

char push (Processo *processo, Processo **pilha, char *controlePilha); //Criação do push para incluir elementos na pilha;

Processo *pop(Processo **pPilha, char *controlePilha); //Criaçao do pop para tirar elementos da pilha

char testaPilhaVazia(Processo *pilha); //Testa se ta vazia (RETORNA UM CHAR POIS ELE SÓ RETORNA 0 E 1 E O CHAR OCUPA APENAS 1 BYTE)

char testaPilhaCheia(char controlePilha); //Testa se ta cheia

char menu(void); // Menu de escolhas para o usuário

char defineTamanhoPilha(); 

void mostraProcesso(Processo *p); //Mostra no pop e no push qual saiu e entrou etc

void mostraPilha(Processo *pilha);

int main(void)
{
	Processo *pilha = NULL;
	char controlePilha = -1; //-1 é uma pilha infinita (pois o tamanho é uma alocação dinamica)
	char opcao; // escolha do usuario no menu
	
	do{
		
		opcao = menu();
		
		switch (opcao){
		
			case '1' : controlePilha = defineTamanhoPilha();
			break;
			
			case '2': pilha = inicializaPilha(pilha);
			break;
				
			case '3': Processo *pu;
					pu = alocacao();
					if(push(pu,&pilha,&controlePilha) == 0) // ja chama a funcao dentro do if
					{
						mostraProcesso(pu);
						printf("\n\tPilha Cheia! Processo nao incluido!");
						free(pu); //libera espaço na memoria
					}
			break;
				
			case '4': Processo *po;
					po = pop(&pilha, &controlePilha);	
					if(po == NULL)
					{
						printf("\n\tPilha Vazia! Sem processos!");
					}
						
					else
					{
						mostraProcesso(po);
						free(po);
					}
			break;
			
			case '5': if(testaPilhaVazia(pilha)==0)
					{
					printf("\n\tPilha nao esta vazia!");
					}
				
					else
					{
						printf("\n\tPilha Vazia!");
					}
			break;
					
			case '6': if (testaPilhaCheia(controlePilha) == 0)
					{
					printf("\n\tPilha Não Vazia!");
					}
			
					else
					{
					printf("\n\tPilha Vazia!");
					}
			break;
			
			case '7': mostraPilha(pilha);
			break;
			
			case 27: 
			break; //sem aspas pois é a tecla esc e n o valor
			
			default: printf("\n\tOpcao invalida!");
		}
		if(opcao!=27)
		{
			printf("\nPressione uma tecla para continuar...");
			getch();
			system("cls");
		}
		
	}while(opcao != 27); //É o código ASCII caractere na tecla ESC
	
	inicializaPilha(pilha); //Limpa pilha antes de sair
	return 0;
}
//FUNÇÕES FEITAS
Processo *alocacao()
{ 
	Processo *p = (Processo *) malloc (sizeof(Processo));
	printf("\nDigite o ID do processo: ");
	scanf("%d", &p->pID);
	fflush(stdin); //Limpar sujeira de memoria do scanf
	printf("\nDigite o nome do processo: ");
	gets(p->nome);
	printf("\nDigite o nome do usuario: ");
	gets(p->usuario);
	printf("\nDigite o tempo do processo: [0-255]");
	scanf("%d", &p->tempoCPU); //scanf %d ao inves de %c pois tu vai ler o valor do char enao a letra em si
	p->anterior == NULL;
	
	return p;
}

Processo *inicializaPilha(Processo *pilha)
{
	if(testaPilhaVazia(pilha) == 0)
	{
		Processo *proxTopo = pilha->anterior;
		free(pilha);
		pilha = proxTopo;
		return inicializaPilha(pilha);
	}
	
	else
	{
		return NULL;
	}
}

char push (Processo *processo, Processo **pPilha, char *controlePilha)
{
	if(testaPilhaCheia(*controlePilha) == 1)
	{
		return 0;	
	}	
		processo->anterior = *pPilha;
		*pPilha = processo;
		
		if(*controlePilha >0)
		{
			*controlePilha--;
			return 1;
		}
	
} 

Processo *pop(Processo **pPilha, char *controlePilha)
{
	if(testaPilhaVazia(*pPilha) == 1)
	{
		return NULL;	
	}	
	
	Processo *p = *pPilha;
	*pPilha = p->anterior;
	p->anterior = NULL;
	
	if(*controlePilha > -1)
	{
		*controlePilha++;
		return p;
	}
}

char testaPilhaVazia(Processo *pilha)
{
	if (pilha == NULL)
	{
		return 1;
	}
	
	return 0;	
}

char testaPilhaCheia(char controlePilha)
{
	if (controlePilha == 0)
	{
		return 1;
	}
	
	return 0;
}

char menu(void)
{
	printf("\t\t\t\tPILHA SHOW");
	printf("\n\tDigite 1 para definir o tamanho da Pilha.");
	printf("\n\tDigite 2 para Incializar a Pilha.");
	printf("\n\tDigite 3 para Push na Pilha.");
	printf("\n\tDigite 4 para Pop na Pilha.");
	printf("\n\tDigite 5 para testar se a Pilha esta vazia.");
	printf("\n\tDigite 6 para testar se a Pilha esta cheia.");
	printf("\n\tDigite 7 para mostrar a Pilha.");
	printf("\n\tDigite ESC para sair.");
	return getch();
	}

char defineTamanhoPilha()
{
	char tamanho;
	printf("\n\nDigite o novo tamanho para a Pilha [-1, 127]: ");
	scanf("%d", &tamanho);
	fflush(stdin);
	return tamanho;
}

void mostraProcesso(Processo *p)
{
	printf("\nID do processo: %d", p->pID);
	printf("\nNome do processo: %s", p->nome);
	printf("\nNome do usuario: %s", p->usuario);
	printf("\nTempo de duracao processo: %d", p->tempoCPU);
}

void mostraPilha(Processo *pilha)
{
	printf("\n\n\t\tPilha Atual: ");
	if(testaPilhaVazia(pilha) ==1)
	{
		printf("\n\tPilha esta vazia.");	
	}
	
	else 
	{
		do{
			mostraProcesso(pilha);
			pilha = pilha->anterior;
		}while(pilha!=NULL);
	}
}
