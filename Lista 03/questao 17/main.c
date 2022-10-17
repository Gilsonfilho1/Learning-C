/*
17. Faça um programa que leia um número inteiro positivo N e calcule a soma dos N primeiros
números naturais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0, soma = 0, contagem = 0;

    printf("Digite um numero:");
    scanf("%d",&contagem);

    while(num1<=contagem)
    {
        soma = soma + num1;
        num1++;
    }
    printf("O resultado da soma e: %d", soma);
    return 0;
}
