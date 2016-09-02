#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n1;
	n1=2;
	
	do
	{
		if(n1%2 == 0)
		{
		printf("%d , ", n1);
		}
		n1++;
	}while(n1<=100);
	
	system("pause");
	return 0;
}
