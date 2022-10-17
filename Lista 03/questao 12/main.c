//12. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, soma = 0, num1 = 1;
    do
    {
        num = num + 2;
        soma = num + soma;
        num1++;
    }
    while(num1 <= 50);
    printf("A soma dos 50 primeiros numeros pares e: %d", soma);
    return 0;
}
