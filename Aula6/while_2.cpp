#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int x, n1, maior, menor;
	
		
	printf("\n Digite um numero diferente de zero: \n");
	scanf("%d", &n1);
	
	maior = n1;
	menor = n1;
	
	for(x=1;n1!=0;x++)
	{
		printf("\n Digite outro numero diferente de zero: \n");
		scanf("%d", &n1);		
			
		
			if(n1>=maior && n1!=0)
			{
				maior = n1;	
			}
			
				else if(n1<maior && n1!=0)
				{
				menor = n1;
				}
				
					
	}
	
		printf("\n O maior numero eh: %d \n", maior);
		printf("\n O menor numero eh: %d \n", menor);
	
	return 0;
}
