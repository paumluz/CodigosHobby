#include <stdio.h>
#include <ctype.h>

     void scanNum(float n)
    {
        n = 0;
        printf(" \n Digite um numero entre 1 e 100: \n ");
        printf(" \n ");
        scanf("%f", &n);
         
        if (n >= 1 && n <= 100)
        {
              printf("\n Parabens! \n");
        }
        else
        {
            printf("\n Erro, por favor tente novamente. \n");
            scanNum(n);
        }
}


    int main()
    {
        float n;
        scanNum(n);
        printf(" \n ");
        system("pause");
        return 0;
    }

