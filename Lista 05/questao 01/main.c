/*
1. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4] [4], i = 0, x = 0, contagem = 0;

    printf("Digite os valores\n");

    while (i<4)
    {
        while (x<4)
        {
            scanf("%d", &matriz[i] [x]);
            x++;
        }
        i++;
        x = 0;
    }

    i = 0;

    while (i<4)
    {
        while (x<4)
        {
            if(matriz[i][x] > 10)
            {
                contagem++;
            }
            else
            {   
            }

            x++;
        }
        i++;
        x = 0;
    }

    printf("Existem %d valores maior que 10", contagem);
    
    return 0;
}
