/*
7. Leia uma matriz de 3 x 3 elementos.
Calcule a soma dos elementos que estão na diagonal
principal.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3] [3] = {0}, i = 0, x = 0, soma = 0;

    while (i<3)
    {
        while (x<3)
        {
            scanf("%d", &matriz[i][x]);
            x++;
        }
        x=0;
        i++;
    }

    i = 0; //reset
    x = 0; //reset

    while (i<3)
    {
        soma += matriz[i] [i];
        i++;
        x = 0;
    }

    printf("\nA Soma das Diagonal principal e: %d", soma);
    return 0;
}