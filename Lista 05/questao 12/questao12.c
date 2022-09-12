/*
12. Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números inteiros. Em
seguida, gere um array unidimensional pela soma dos números de cada coluna da matriz e
mostrar na tela esse array. Por exemplo, a matriz:
5 -8 10
1 2 15
25 10 7
Vai gerar um vetor, onde cada posição é a soma das colunas da matriz. A primeira posição será
5 + 1 + 25, e assim por diante. O resultado seria: 31 4 3
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3] [3] = {0}, x = 0, i = 0, resultado[3];

    printf("Digite sua matriz\n");

    while (i<3)
    {
        while (x<3)
        {
            scanf("%d", &matriz[i] [x]);
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
            printf("%d ", matriz[i] [x]);
            x++;
        }
        printf("\n");
        i++;
        x = 0;
    }

resultado[1] = matriz[0] [0] + matriz[1] [0] + matriz[2] [0];
resultado[2] = matriz[0] [1] + matriz[1] [1] + matriz[2] [1];
resultado[3] = matriz[0] [2] + matriz[1] [2] + matriz[2] [2];

printf("%d \n", resultado[1]);
printf("%d \n", resultado[2]);
printf("%d \n", resultado[3]);

    return 0;
}
