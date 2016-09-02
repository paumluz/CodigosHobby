#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	char Letra;

    printf("Valor de char sem atribuicao: %c \n", Letra);
        Letra = 'Z';
            printf("Valor de char atribuido: %c \n", Letra);

        printf("Digite uma letra para a variavel:\n ");
            scanf("%c", &Letra);
                printf("Letra digitada: %c \n", Letra);

	getch();
	return 0;
}
