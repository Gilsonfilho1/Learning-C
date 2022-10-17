/*
11. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, impares = 1;

    printf("Digite um numero: ");
    scanf("%d",&num);

    do
    {
        printf("%d\n", impares);
        num = num - 1;
        impares = impares + 2;
    }
    while(num >= 0);

    return 0;
}
