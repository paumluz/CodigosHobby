#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n1;
	n1=5;
	
	do
	{
		if(n1%5 == 0)
		{
		printf("%d , ", n1);
		}
		n1++;
	}while(n1<=500);
	
	system("pause");
	return 0;
}
