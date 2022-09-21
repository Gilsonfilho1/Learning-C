/*
7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor,
o maior elemento e a posição que ele se encontra.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 1, num[10], maior = -1000, posicao;

    printf("Digite 10 valores\n");

        while(i<=10)
    {

    scanf("%d", &num[i]);

    if(maior < num[i])
    {
        maior = num[i];
        posicao = i;
    }

    i++;
    }

    printf("Maior: %d\n", maior);
    printf("Posicao: %d", posicao);

    return 0;
}
