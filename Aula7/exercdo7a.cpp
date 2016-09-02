#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n1,n2,n3,n4,i,soma1,soma2,soma3,soma4;
	i=1;
	
	
	do
	{
		printf("Digite a nota %d para o Aluno 1: \n", i);
			scanf("%d", &n1);
			printf("\n");
				soma1+=n1;
		
		printf("Digite a nota %d para o Aluno 2: \n", i);
			scanf("%d", &n2);
			printf("\n");
				soma2+=n2;
		
		printf("Digite a nota %d para o Aluno 3: \n",i);
			scanf("%d", &n3);
			printf("\n");
				soma3+=n3;
				
		printf("Digite a nota %d para o Aluno 4: \n", i);
			scanf("%d", &n4);
			printf("\n");
				soma4+=n4;
		i++;
	}while(i<=2);
	
	printf("Media dos Aluno 1: %d \n", soma1/2);
	printf("Media dos Aluno 2: %d \n", soma2/2);
	printf("Media dos Aluno 3: %d \n", soma3/2);
	printf("Media dos Aluno 4: %d \n", soma4/2);
	
	system("pause");
	return 0;
}
