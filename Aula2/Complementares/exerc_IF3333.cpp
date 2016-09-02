#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1,n2;
	 		n1=0;
	 		 n2=0;
	 					
	printf("Digite um numero A: \n");
	scanf("%d", &n1);
		
		printf("Digite um numero B: \n");
		scanf("%d", &n2);
		
			if(n1>0)
			{
				printf("\nNumero %d eh Positivo", n1);	
			}
			
			else if(n1<0) 
			{
				printf("\nNumero %d eh Negativo", n1);	

			}
			
			else if(n1==0)
			{
			printf("\nNumero A igual a ZERO!");	
			}	
			
					if(n2>0)
					{
					printf("\nNumero %d eh Positivo", n2);	
					}
			
					else if(n2<0) 
					{
					printf("\nNumero %d eh Negativo", n2);	
	
					}
			
					else if(n2==0)
					{
					printf("\n Numero B igual a ZERO!");	
					}	
		
		
			return 0;
}

