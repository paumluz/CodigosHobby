#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
	int av1[10], av2[10]; //DECLARA��O DE VARI�VEIS
	int i,j, pc1, ce1, pc2, ce2, aux, esc1,esc2;
	int cav1,cav2;
	cav1 = cav2 = 0;
	pc1 = ce1 = 0;
	pc2 = ce2 = 0;
	aux = esc1 = esc2 = 0; //ZERANDO VARI�VEIS	
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0;i<=10;i++) //MARCANDO TODOS LUGARES COMO VAGOS
	{
			av1[i] = 0;
			av2[i] = 0;
	}

	do{
		do{ //ESCOLHA DO AVI�O
		printf("\nEscolha qual avi�o quer embarcar (1/2): \n");
		scanf("%d", &aux);
		}while(aux < 1 || aux > 2);
	
	system("cls");
	switch(aux)	
	{
		case 1:   //C�DIGO DO AVI�O 1
				do{
				printf("\nAvi�o 1:");
				printf("\nDigite '1' para Primeira Classe;");
				printf("\nDigite '2' para Classe Econ�mica;");
				printf("\nDigite '3' para Visualizar a Aeronave;");
				printf("\nDigite '4' para Sair.\n");
				printf("\nOP��O: -> ");
				scanf("%d", &esc1);
				}while(esc1 < 1 || esc1 > 4);
			
			
				switch(esc1) //MARCAR LUGAR NA PRIMEIRA CLASSE
				{
					case 1: //PRIMEIRA CLASSE
						
					if(pc1 > 4) //VERIFICA SE � POSS�VEL FAZER NOVAS RESERVAS
					{
						printf("\nA Primeira Classe Avi�o 1 se encontra completamento OCUPADA!\n");
						printf("\nPor favor escolha outra classe ou outro avi�o...");
					}
						
						if(av1[pc1] == 0 && pc1 < 5)  //VERIFICA SE EST� DESOCUPADO
						{
							av1[pc1] = 1;
							printf("\nLugar %d na Primeira Classe do Avi�o 1 foi reservado!\n", pc1+1);
							pc1++; //CONTADOR QUE VERIFICA SE O AVI�O EST� LOTADO
						}
						
						else if(av1[pc1] != 0) //CASO ESTEJA OCUPADO O ASSENTO
						{
							printf("\nLugar %d na Primeira Classe do Avi�o 1 est� Ocupado!\n", pc1+1);
						}
		
					break;
					
						case 2: //CLASSE ECON�MICA
						
						if(ce1 > 4) //VERIFICA SE � POSS�VEL FAZER NOVAS RESERVAS
						{
						printf("\n A Classe Econ�mica do Avi�o 1 se encontra completamento OCUPADA!\n");
						printf("\nPor favor escolha outra classe ou outro avi�o...");
						}
					
							if(av1[ce1+5] == 0 && ce1 < 5)  //VERIFICA SE EST� DESOCUPADO
							{
								av1[ce1+5] = 1;
								printf("\nLugar %d na Classe Econ�mica do Avi�o 1 foi reservado!\n", ce1+1);
								ce1++; //CONTADOR QUE VERIFICA SE O AVI�O EST� LOTADO
							}
						
							else if(av1[ce1+5] != 0) //CASO ESTEJA OCUPADO O ASSENTO
							{
								printf("\nLugar %d na Classe Econ�mica do Avi�o 1 est� Ocupado!\n", ce1+1);
							}
				
						break;
						
						case 3: // VISUALIZA��O DA AERONAVE 1
								printf("\nDisponibilidade dos assentos da Aeronave 1: \n");
								for(i=0;i<10;i++)
								{
									if(av1[i] == 0) //SE ESTIVER LIVRE IMPRIME ESSA FIGURA
									{
										printf("\t|--|\n");
									}
									
									if(av1[i] != 0 ) //CASO CONTR�RIO IMPRIME ESTA
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
						
		break; //FIM DO AVI�O 1
		
	//==========================================================================================================================================//		
		
		case 2:		//C�DIGO DO AVI�O 2
		
					do{
				printf("\nAvi�o 2:");
				printf("\nDigite '1' para Primeira Classe;");
				printf("\nDigite '2' para Classe Econ�mica;");
				printf("\nDigite '3' para Visualizar a Aeronave;");
				printf("\nDigite '4' para Sair.\n");
				printf("\nOP��O: -> ");
				scanf("%d", &esc2);
				}while(esc2 < 1 || esc2 > 4);
			
				switch(esc2) //MARCAR LUGAR NA PRIMEIRA CLASSE
				{
					case 1: //PRIMEIRA CLASSE
					
				if(pc2 > 4)
				{	
					printf("\nA Primeira Classe do Avi�o 2 se encontra completamento OCUPADA!\n");
					printf("\nPor favor escolha outra classe ou outro avi�o...");
				}
						if(av2[pc2] == 0 && pc2 < 5)  //VERIFICA SE EST� DESOCUPADO
						{
							av2[pc2] = 1;
							printf("\nLugar %d na Primeira Classe do Avi�o 2 foi reservado!\n", pc2+1);
							pc2++; //CONTADOR QUE VERIFICA SE O AVI�O EST� LOTADO
						}
						
						else if(av2[pc2] != 0) //CASO ESTEJA OCUPADO O ASSENTO
						{
							printf("\nLugar %d na Primeira Classe do Avi�o 2 est� Ocupado!\n", pc2+1);
						}
			
					break;
					
						case 2: //CLASSE ECON�MICA
						
						if(ce2 > 4)
						{	
						printf("\nA Classe Econ�mica do Avi�o 2 se encontra completamento OCUPADA!");
						printf("\nPor favor escolha outra classe ou outro avi�o...");
						}
					
							if(av2[ce2+5] == 0 && ce2 < 5)  //VERIFICA SE EST� DESOCUPADO
							{
								av2[ce2+5] = 1;
								printf("\nLugar %d na Classe Econ�mica do Avi�o 2 foi reservado!\n", ce2+1);
								ce2++; //CONTADOR QUE VERIFICA SE O AVI�O EST� LOTADO
							}
						
							else if(av2[ce2+5] != 0) //CASO ESTEJA OCUPADO O ASSENTO
							{
								printf("\nLugar %d na Classe Econ�mica do Avi�o 2 est� Ocupado!\n", ce2+1);
							}
		
						break;
						
						case 3: // VISUALIZA��O DA AERONAVE 1
								printf("\nDisponibilidade dos assentos da Aeronave 2: \n");
								for(i=0;i<10;i++)
								{
									if(av2[i] == 0) //SE ESTIVER LIVRE IMPRIME ESSA FIGURA
									{
										printf("\t|--|\n");
									}
									
									if(av2[i] != 0 ) //CASO CONTR�RIO IMPRIME ESTA
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
			
}while(pc1 < 5 || ce1 < 5 || pc2 <5 || ce2 < 5); //REPETE O C�DIGO ENQUANTO O AVI�O TEM LUGAR SOBRANDO

//CASO AMBOS AVI�ES ESTEJAM LOTADOS, IMPRIME A MENSAGEM

printf("\n ===========================AERONAVES LOTADAS===========================\n");
	
return 0;
}
