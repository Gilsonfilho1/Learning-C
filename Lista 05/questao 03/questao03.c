/*
3. Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da coluna de
cada elemento. Em seguida, imprima na tela a matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4] [4] = {0}, i = 0, x = 0;

    while (i<4)
    {
        while (x<4)
        {
        matriz[i] [x] = x*i;
        printf("%d ", matriz[i] [x]);
        x++;
        }
        printf("\n");
        i++;
        x = 0;
    }
    return 0;
}