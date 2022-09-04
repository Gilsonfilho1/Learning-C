/*
8. Faça um programa que leia 10 inteiros e imprima sua média.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int i = 0, soma = 0, media=0;

    while(i<10)
    {
        i++;
        printf("Digite o %d Numero:", i);
        scanf("%d", &num[i]);
        soma = soma + num[i];
    }
    media = soma / 10;
    printf("A Media dos seus numeros e: %d", media);
    return 0;
}

