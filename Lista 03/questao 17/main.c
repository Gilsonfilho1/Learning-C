/*
17. Fa�a um programa que leia um n�mero inteiro positivo N e calcule a soma dos N primeiros
n�meros naturais.
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
