#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
	int av1[10], av2[10]; //DECLARAÇÃO DE VARIÁVEIS
	int i,j, pc1, ce1, pc2, ce2, aux, esc1,esc2;
	int cav1,cav2;
	cav1 = cav2 = 0;
	pc1 = ce1 = 0;
	pc2 = ce2 = 0;
	aux = esc1 = esc2 = 0; //ZERANDO VARIÁVEIS	
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0;i<=10;i++) //MARCANDO TODOS LUGARES COMO VAGOS
	{
			av1[i] = 0;
			av2[i] = 0;
	}

	do{
		do{ //ESCOLHA DO AVIÃO
		printf("\nEscolha qual avião quer embarcar (1/2): \n");
		scanf("%d", &aux);
		}while(aux < 1 || aux > 2);
	
	system("cls");
	switch(aux)	
	{
		case 1:   //CÓDIGO DO AVIÃO 1
				do{
				printf("\nAvião 1:");
				printf("\nDigite '1' para Primeira Classe;");
				printf("\nDigite '2' para Classe Econômica;");
				printf("\nDigite '3' para Visualizar a Aeronave;");
				printf("\nDigite '4' para Sair.\n");
				printf("\nOPÇÃO: -> ");
				scanf("%d", &esc1);
				}while(esc1 < 1 || esc1 > 4);
			
			
				switch(esc1) //MARCAR LUGAR NA PRIMEIRA CLASSE
				{
					case 1: //PRIMEIRA CLASSE
						
					if(pc1 > 4) //VERIFICA SE É POSSÍVEL FAZER NOVAS RESERVAS
					{
						printf("\nA Primeira Classe Avião 1 se encontra completamento OCUPADA!\n");
						printf("\nPor favor escolha outra classe ou outro avião...");
					}
						
						if(av1[pc1] == 0 && pc1 < 5)  //VERIFICA SE ESTÁ DESOCUPADO
						{
							av1[pc1] = 1;
							printf("\nLugar %d na Primeira Classe do Avião 1 foi reservado!\n", pc1+1);
							pc1++; //CONTADOR QUE VERIFICA SE O AVIÃO ESTÁ LOTADO
						}
						
						else if(av1[pc1] != 0) //CASO ESTEJA OCUPADO O ASSENTO
						{
							printf("\nLugar %d na Primeira Classe do Avião 1 está Ocupado!\n", pc1+1);
						}
		
					break;
					
						case 2: //CLASSE ECONÔMICA
						
						if(ce1 > 4) //VERIFICA SE É POSSÍVEL FAZER NOVAS RESERVAS
						{
						printf("\n A Classe Econômica do Avião 1 se encontra completamento OCUPADA!\n");
						printf("\nPor favor escolha outra classe ou outro avião...");
						}
					
							if(av1[ce1+5] == 0 && ce1 < 5)  //VERIFICA SE ESTÁ DESOCUPADO
							{
								av1[ce1+5] = 1;
								printf("\nLugar %d na Classe Econômica do Avião 1 foi reservado!\n", ce1+1);
								ce1++; //CONTADOR QUE VERIFICA SE O AVIÃO ESTÁ LOTADO
							}
						
							else if(av1[ce1+5] != 0) //CASO ESTEJA OCUPADO O ASSENTO
							{
								printf("\nLugar %d na Classe Econômica do Avião 1 está Ocupado!\n", ce1+1);
							}
				
						break;
						
						case 3: // VISUALIZAÇÃO DA AERONAVE 1
								printf("\nDisponibilidade dos assentos da Aeronave 1: \n");
								for(i=0;i<10;i++)
								{
									if(av1[i] == 0) //SE ESTIVER LIVRE IMPRIME ESSA FIGURA
									{
										printf("\t|--|\n");
									}
									
									if(av1[i] != 0 ) //CASO CONTRÁRIO IMPRIME ESTA
									{	
										printf("\t|XX|\n");
									}
								}
						break;
						
						case 4: //SAIR
							printf("\nSaindo do Programa, obrigado por voar conosco.\n");
							return 0;
						break;
				}
						
		break; //FIM DO AVIÃO 1
		
	//==========================================================================================================================================//		
		
		case 2:		//CÓDIGO DO AVIÃO 2
		
					do{
				printf("\nAvião 2:");
				printf("\nDigite '1' para Primeira Classe;");
				printf("\nDigite '2' para Classe Econômica;");
				printf("\nDigite '3' para Visualizar a Aeronave;");
				printf("\nDigite '4' para Sair.\n");
				printf("\nOPÇÃO: -> ");
				scanf("%d", &esc2);
				}while(esc2 < 1 || esc2 > 4);
			
				switch(esc2) //MARCAR LUGAR NA PRIMEIRA CLASSE
				{
					case 1: //PRIMEIRA CLASSE
					
				if(pc2 > 4)
				{	
					printf("\nA Primeira Classe do Avião 2 se encontra completamento OCUPADA!\n");
					printf("\nPor favor escolha outra classe ou outro avião...");
				}
						if(av2[pc2] == 0 && pc2 < 5)  //VERIFICA SE ESTÁ DESOCUPADO
						{
							av2[pc2] = 1;
							printf("\nLugar %d na Primeira Classe do Avião 2 foi reservado!\n", pc2+1);
							pc2++; //CONTADOR QUE VERIFICA SE O AVIÃO ESTÁ LOTADO
						}
						
						else if(av2[pc2] != 0) //CASO ESTEJA OCUPADO O ASSENTO
						{
							printf("\nLugar %d na Primeira Classe do Avião 2 está Ocupado!\n", pc2+1);
						}
			
					break;
					
						case 2: //CLASSE ECONÔMICA
						
						if(ce2 > 4)
						{	
						printf("\nA Classe Econômica do Avião 2 se encontra completamento OCUPADA!");
						printf("\nPor favor escolha outra classe ou outro avião...");
						}
					
							if(av2[ce2+5] == 0 && ce2 < 5)  //VERIFICA SE ESTÁ DESOCUPADO
							{
								av2[ce2+5] = 1;
								printf("\nLugar %d na Classe Econômica do Avião 2 foi reservado!\n", ce2+1);
								ce2++; //CONTADOR QUE VERIFICA SE O AVIÃO ESTÁ LOTADO
							}
						
							else if(av2[ce2+5] != 0) //CASO ESTEJA OCUPADO O ASSENTO
							{
								printf("\nLugar %d na Classe Econômica do Avião 2 está Ocupado!\n", ce2+1);
							}
		
						break;
						
						case 3: // VISUALIZAÇÃO DA AERONAVE 1
								printf("\nDisponibilidade dos assentos da Aeronave 2: \n");
								for(i=0;i<10;i++)
								{
									if(av2[i] == 0) //SE ESTIVER LIVRE IMPRIME ESSA FIGURA
									{
										printf("\t|--|\n");
									}
									
									if(av2[i] != 0 ) //CASO CONTRÁRIO IMPRIME ESTA
									{	
										printf("\t|XX|\n");
									}
								}
						break;
						
						case 4: //SAIR
							printf("\nSaindo do Programa, obrigado por voar conosco.\n");
							return 0;
						break;
				}
		
	break;
	}
			
}while(pc1 < 5 || ce1 < 5 || pc2 <5 || ce2 < 5); //REPETE O CÓDIGO ENQUANTO O AVIÃO TEM LUGAR SOBRANDO

//CASO AMBOS AVIÕES ESTEJAM LOTADOS, IMPRIME A MENSAGEM

printf("\n ===========================AERONAVES LOTADAS===========================\n");
	
return 0;
}
