#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
char l1;

printf("Digite uma letra: \n");
scanf("%c", &l1);

if (l1 == 'a' ||l1 == 'e'||l1 == 'i'||l1 == 'o'||l1 == 'u'||l1 == 'A'||l1 == 'E'||l1 == 'I'||l1 == 'O'||l1 == 'U')
{
	printf("\n A letra digitada eh uma VOGAL!\n");
}

	else
	{
		printf("\n A letra digita eh uma CONSOANTE!\n");
	}
	system("pause");
	return 0;
}

