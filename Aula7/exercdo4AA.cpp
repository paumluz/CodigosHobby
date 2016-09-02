#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n1,soma;
	n1=0;
	
	do
	{
		n1++;
		soma+=n1;
	}while(n1<=99);
	
	printf("%d , ", soma-1);
	
	system("pause");
	return 0;
}
