#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int n1, n2, soma;
	n1 = 0;
	n2 = 0;
	soma = 0;
	
	printf("\n Digite um numero inteiro: ");
	scanf("%d", &n1);
	printf("\n Digite um segundo numero inteiro a ser somado: ");
	scanf("%d", &n2);
	soma = n1+n2;
	printf("\n A soma de seus numeros eh: %d ", soma);
	system("pause");
	return 0;
	}
