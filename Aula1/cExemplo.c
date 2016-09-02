#include <stdio.h>

     int scanNum(int n)
    {
        printf("Digite um número entre 1 e 100: \n");
        scanf("%d", &n);

        if (n >= 1 && n <= 100)
        {
              printf("\n Parabens \n");
        }
        else
        {
            printf("\n Erro. \n");
        }
    }


    int main()
    {
        scanNum;

        system("pause");
    }

