/*
4. Fa�a um programa que leia um vetor de 8 posi��es e, em seguida, leia tamb�m dois valores X e Y
quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa dever� escrever a
soma dos valores encontrados nas respectivas posi��es X e Y.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, num[8], x, y, resultado;

    printf("Digite os oito numeros\n");

    while (i <= 8)
    {
        scanf("%d", &num[i]);
        i++;
    }

    printf("Digite o X\n");
    scanf("%d", &x);
    printf("Digite o Y\n");
    scanf("%d", &y);

    resultado = num[x] + num[y];

    printf("O Resultado da soma de X e Y e: %d", resultado);

    return 0;
}
