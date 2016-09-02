#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n1, n2;
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &n1);
		
		printf("\nDigite outro numero inteiro: \n");
		scanf("%d", &n2);
	
			printf("\n O dobro de %d , eh %d \n", n1, (n1*2));
			printf("\n O dobro de %d , eh %d \n", n2, (n2*2));
			
			printf("\n O dobro da soma entre %d e %d eh %d \n", n1, n2, (n1+n2)*2);
				
				system("pause");
				return 0;
}
