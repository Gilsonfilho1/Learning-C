/*
14. Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos
repetidos.
*/

//CODE COM ERRO

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[20], resultado[20], i = 1, x = 1;
    printf("Digite 20 numeros\n");

    while(i<=5)
    {
    scanf("%d", &num[i]);
    i++;
    }

    i = 1;

    while(i<=5)
    {
    i++;
    while(x<=5)
    {
    if(num[x] == num[i])
        {
            resultado[x] = num[x];
        }
    x++;
    }
    printf("\n%d", resultado[x]);
    }

    return 0;
}
