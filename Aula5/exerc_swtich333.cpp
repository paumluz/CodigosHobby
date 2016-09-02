#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main (void )
{
  int num1, num2;
  char op;
  
  printf("Digite o primeiro numero da operacao: \n");
  scanf("%d", &num1);
  
  	printf("Digite o segundo numero da operacao: \n");
  	scanf("%d", &num2);
  
		printf("Digite a operacao artimetica desejada:\n ");
		printf("'+' para ADICAO\n");
 		printf("'-' para SUBTRACAO\n");
 		printf("'*' para MULTIPLICACAO\n");
 		printf("'/' para DIVISAO\n");
 		printf("' Por cento ' para RESTO DA DIVISAO\n");
 		scanf(" %c", &op);
 		
 		switch(op)
 		{
 			case('+'):
			 printf("\nSOMA entre %d e %d eh: %d \n", num1, num2, (num1+num2));
			 break;
			 
			 case('-'):
			 printf("\nSUBTRACAO entre %d e %d eh: %d \n", num1, num2, (num1-num2));
			 break;
			 
			 case('*'):
			 printf("\nMULTIPLICACAO entre %d e %d eh: %d \n", num1, num2, (num1*num2));
			 break;
			 
			 case('/'):
			 printf("\nDIVISAO entre %d e %d eh: %d \n", num1, num2, (num1/num2));
			 break;
			 
			 case('%'):
			 printf("\nRESTO DA DIVISAO entre %d e %d eh: %d \n", num1, num2, (num1%num2));
			 break;
			 
			 default:
			 printf("\nOPERACAO INVALIDA!\n");	
		}
 
 
  getch();
  return 0;
}
