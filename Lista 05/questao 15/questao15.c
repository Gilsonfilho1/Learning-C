//15. Faça um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A (quadrado)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A [3] [3] = {0}, B [3] [3] = {0}, i = 0, x = 0;

    printf("Digite a Matriz A\n");

    while (i<3)
    {

        while (x<3)
        {
            scanf("%d", &A [i] [x]);
            B [i] [x] = A [i] [x] * A [i] [x];
            x++;
        }
        
        i++;
        x = 0;
    }
    i = 0;

        while (i<3)
    {

        while (x<3)
        {
            printf("%d ",B[i] [x]);
            x++;
        }
        printf("\n");
        i++;
        x = 0;
    }


    return 0;
}
