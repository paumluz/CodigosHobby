#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int n1,count;
	n1=200;
	count =0;
	
	do
	{
		if(n1%2 != 0)
		{
		printf("%d\n", n1);
		count++;
		}
		n1--;
	}while(n1>=100);
	
	printf("\n Numeros escritos: %d \n", count);
	
	system("pause");
	return 0;
}
