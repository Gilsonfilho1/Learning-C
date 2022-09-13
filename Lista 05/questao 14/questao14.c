
//14. Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A * B

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz1[3] [3] = {0}, matriz2[3] [3] = {0}, matriz3 [3] [3] = {0}, i = 0, x = 0;

    printf("Digite a Matriz 1 \n");
    while (i<3)
    {
        while (x<3)
        {
            scanf("%d", &matriz1 [i] [x]);
            x++;
        }
        i++;
        x = 0;
    }

    i = 0;

    printf("Digite a Matriz 2 \n");

        while (i<3)
    {
        while (x<3)
        {
            scanf("%d", &matriz2 [i] [x]);
            x++;
        }
        i++;
        x = 0;
    }

    printf("C = A*B \n");
    
    i = 0;
    x = 0;

        while (i<3)
    {
        while (x<3)
        {
            matriz3 [i] [x] = matriz1 [i] [x] * matriz2 [i] [x];
            x++;
        }
        i++;
        x = 0;
    }

    x = 0;
    i = 0;

        while (i<3)
    {
        while (x<3)
        {
            printf("%d ", matriz3 [i] [x]);
            x++;
        }
        printf("\n");
        i++;
        x = 0;
    }
    return 0;
}