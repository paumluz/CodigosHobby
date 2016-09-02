#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1,n2;
	 		n1=0;
	 			n2=0;
	 			
	printf("Digite um numero: \n");
	scanf("%d", &n1);
		
		printf("Digite outro numero: \n");
		scanf("%d", &n2);
		
			if(n1>n2)
			{
				printf("Maior: %d \n Menor: %d", n1, n2);	
			}
			
			else if(n2>n1)
			{
				printf("Maior: %d \n Menor: %d", n2, n1);	
			}
			
			else if(n1==n2)
			{
			printf("Numeros iguais %d e %d", n1, n2);	
			}	
		
			return 0;
}

