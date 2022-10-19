/*
26. Faça um programa que leia um valor N inteiro e positivo, calcule e mostre o valor E,
conforme a fórmula a seguir.
1 E = 1 + 1/2! + 1/3! + 1/4! + … + 1/n!
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num, x, fatorial = 1, soma;
    int z = 0;

    printf("Digite o numero \n");
    scanf("%f", &num);

    for (x=1; x<=num; x++)
    {
        for (z=num; z>=1; z--)
        {
            fatorial = fatorial * x;
        }

        if (z=1)
        {
            soma = soma + (1/fatorial);
        }
    }
    printf("%f", soma);
    return 0;
}
