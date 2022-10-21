/*
19. Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um vetor
com 10 posições. Preencha um segundo vetor apenas com os números ímpares do primeiro vetor.
Imprima os dois vetores
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, num[10], numim[10];

    printf("Digite 10 Numeros\n");

    while(i<=10)
    {
        scanf("%d", &num[i]);
        if(num[i]<51 && num[i]>-1)
        {
            i++;
        }
        else
        {
            printf("Digite um Numero menor que 50 e maior que 0\n");
        }
        numim[i] = 0;
    }

    i = 1;

    while(i<=10)
    {
    if(num[i]%2!=0)
    {
        numim[i] = num[i];
    }
    i++;
    }
    i = 1;
    printf("\nVetor com os numeros\n");

    while(i<=10)
    {
        printf("%d ",num[i]);
        i++;
    }


    i = 1;

    printf("\nNumeros impares do vetor\n");

    while(i<=10)
    {
        printf("%d ",numim[i]);
        i++;
    }
    return 0;
}
