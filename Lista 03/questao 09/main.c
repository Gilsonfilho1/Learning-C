/*
9. Fa�a um programa que leia 10 inteiros positivos, ignorando n�o positivos, e imprima sua m�dia.
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

