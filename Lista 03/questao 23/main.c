//23. Fa�a um programa que some todos os n�meros naturais abaixo de 1000 que s�o m�ltiplos de 3 ou 5.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, soma = 0, x;

    x = 0;

    while(x<=num1, x<1000)
    {
        if(x%3==0 || x%5==0)
        {
            soma = soma + x;
        }
        x++;
    }

    printf("A soma e: %d", soma);

    return 0;
}
