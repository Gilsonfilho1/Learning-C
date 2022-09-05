/*
4. Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4] [4] = {0}, i = 0, x = 0, maior = -100, localizacao1 = 0, localizacao2 = 0;

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
    x = 0;

    while (i<4)
    {
        while (x<4)
        {
        if (matriz[i] [x]>maior)
        {
            maior = matriz[i] [x];
            localizacao1 = i;
            localizacao2 = x;
        }
        x++;
        }
        i++;
        x = 0;
    }

    printf("Maior numero %d, localizacao %d, %d", maior, localizacao1, localizacao2);

    return 0;
}