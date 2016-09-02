#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n1,i,soma;
	i=0;
	soma=0;
	
	do
	{
		
		printf("Digite um numero inteiro: \n");
		scanf("%d", &n1);
		soma+=n1;
		i++;
	}while(i<=6);
	
	printf("Soma dos numeros: %d \n", soma);
	printf("Media dos numeros: %d \n", soma/i);
	
	system("pause");
	return 0;
}
