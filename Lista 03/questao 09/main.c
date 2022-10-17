/*
9. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int i = 0, soma = 0, media=0;
    int conta=0;

    while(i<10)
    {
        i++;
        printf("Digite o %d Numero:", i);
        scanf("%d", &num[i]);
        if(num[i]>0)
        {
        soma = soma + num[i];
        conta = conta +1;
        }
    }
    printf("A Media dos seus numeros e: %d", soma/conta);

    return 0;
}

