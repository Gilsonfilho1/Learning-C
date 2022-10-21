/*
20. Fa�a um programa que receba do usu�rio dois vetores, A e B, com 10 n�meros inteiros cada.
Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, A[10], B[10], C[10];
    printf("Digite os 10 Valores de A\n");

    while(i<=10)
    {
        scanf("%d", &A[i]);
        i++;
    }

    i = 1; // RESET

    printf("Digite os 10 Valores de B\n");

    while(i<=10)
    {
        scanf("%d", &B[i]);
        C[i] = 0;
        i++;
    }

    i = 1; // RESET

    while(i<=10)
    {
    C[i] = A[i] - B[i];
    printf("%d ", C[i]);
    i++;
    }

        return 0;
}
