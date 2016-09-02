#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n1;
	n1=500;
	
	do
	{
		if(n1%5 == 0)
		{
		printf("%d , ", n1);
		}
		n1--;
	}while(n1>=5);
	
	system("pause");
	return 0;
}
