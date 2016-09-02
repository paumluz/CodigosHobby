#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1;
	 		n1=0;
	 					
	printf("Digite um numero: \n");
	scanf("%d", &n1);
		
		
			if(n1>0)
			{
				printf("Numero %d eh Positivo", n1);	
			}
			
			else if(n1<0) 
			{
				printf("Numero %d eh Negativo", n1);	

			}
			
			else if(n1==0)
			{
			printf("Numero 1 igual a ZERO!");	
			}	
		
			return 0;
}

