#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n1;
	
		printf("Digite um numero inteiro: \n");
		scanf("%d", &n1);
			
			if(n1>=1)
			{
				printf("\n O numero %d eh Positivo!\n", n1);	
			}
				else if(n1==0)
				{
					printf("\n O numero %d eh ZERO!\n", n1);
					
				}	
					else
					{
						printf("\n O numero %d eh Negativo!\n", n1);
					}		
					
	system("pause");
	return 0;
}

