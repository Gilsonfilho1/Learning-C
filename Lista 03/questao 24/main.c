//24. Faça um programa que calcula o fatorial de um número positivo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, fatorial = 1, x;
    printf("Digite um Numero: ");
    scanf("%d", &num1);
    x = num1;

    while(x>=1)
        {
        fatorial = fatorial * x;
        x--;
        }

    printf("O fatorial de %d e %d", num1, fatorial);
    return 0;
}
