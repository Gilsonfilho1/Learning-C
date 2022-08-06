/*
2. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.
Escreva ao final a matriz obtida.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5] [5] = {0}, i = 0, x = 0;

    while (i<5)
    {
        while (x<5)
        {
        matriz[i] [i] = 1;
        printf("%d", matriz[i] [x]);
        x++;
        }
        printf("\n");
        i++;
        x = 0;
    }
    return 0;
}