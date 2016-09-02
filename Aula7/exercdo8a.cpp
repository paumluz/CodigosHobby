#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n1;
	n1=10;
	
	do
	{
		if(n1%10 == 0)
		{
		printf("%d , ", n1);
		}
		n1++;
	}while(n1<=200);
	
	system("pause");
	return 0;
}
