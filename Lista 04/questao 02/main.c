/*
2. Fa�a um programa que possua um vetor denominado A que armazene 6 n�meros inteiros. O
programa deve executar os seguintes passos:
a. Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b. Armazene em uma vari�vel inteira (simples) a soma entre os valores das posi��es A[0],
A[1] e A[5] do vetor e mostre na tela esta soma.
c. Modifique o vetor na posi��o 4, atribuindo a esta posi��o o valor 100.
d. Mostre na tela cada valor do vetor A, um em cada linha.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5], soma;

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    soma = A[0] + A[1] + A[5];

    printf("Soma: %d\n\n", soma);

    A[3] = 100;

    printf("Valor 1: %d ", A[0]);
    printf("\nValor 2: %d ", A[1]);
    printf("\nValor 3: %d ", A[2]);
    printf("\nValor 4: %d ", A[3]);
    printf("\nValor 5: %d ", A[4]);
    printf("\nValor 6: %d ", A[5]);

    return 0;
}
