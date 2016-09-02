#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j;
	
	for(i=0;i<=10;i++)
	{
		for(j=0;j<=10;j++)
		{
			if((2*i<=j) && ((3*i)+(2*j)<=18))
			{
			printf("(%d,%d)\n", i, j);
			
			}
		}
	}
	
	system("pause");
	return 0;
}
