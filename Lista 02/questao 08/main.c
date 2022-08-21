/*
8. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como
a diferença existente entre ambos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, num2, diferenca;

    printf("Digite o primeiro numero\n");
    scanf("%i",&num);
    printf("Digite o segundo\n");
    scanf("%i",&num2);

    if(num > num2)
    {
        diferenca = num - num2;
        printf("\n%i e maior que %.i a sua diferenca e de %i \n", num, num2, diferenca);
    }
    else
    {
        diferenca = num2 - num;
        printf("\n%i e maior que %.i a sua diferenca e de %i \n", num2, num, diferenca);
    }
}
