/*
6. Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
1 A[i][j] = 2i + 7j, se i < j;
2 A[i][j] = 3i2 - 1, se i = j;
3 A[i][j] = 4i3 - 5j2 + 1, se i > j:
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int matriz[10] [10] = {0}, i = 0, x = 0;

        while (i<10)
    {
        while (x<10)
        {
        if(i<x)
        {
            matriz[i] [x] =  (2*i) + (7*x);
        }
        if (i == x)
        {
            matriz[i] [x] = ((i*3)*(i*3)) - 1;
        }
        if (i>x)
        {
            matriz[i] [x] = pow(i*4 , 3) - pow(5*x, 2);
        }
        x++;
        }
        i++;
        x = 0;
    }

    i = 0;
    x = 0;

        while (i<10)
    {
        while (x<10)
        {
        printf("%d ", matriz[i] [x]);
        x++;
        }
        printf("\n");
        i++;
        x = 0;
    }
    return 0;
}
