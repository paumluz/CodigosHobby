#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,soma,neg;
	float ve[9];
	
	soma = 0;
	neg = 0;
	
	for(i=0;i<10;i++)
	{
		printf("Informe um numero real: \n");
		scanf("%f", &ve[i]);
			
			if(ve[i] < 0)
			{
				neg++;
			}
			
			if(ve[i] >0)
			{
				soma+=ve[i];
			}
			
	}
	
	printf("\nSoma dos numeros positivos digitados: %d", soma);
	printf("\nQuantidade de numeros negativos digitados: %d",neg);
	
	return 0;
}
