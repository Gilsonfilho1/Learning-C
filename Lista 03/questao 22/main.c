/*
22. Escreva um programa que leia um n�mero inteiro e calcule a soma de todos os divisores desse
n�mero, com exce��o dele pr�prio.
Ex: a soma dos divisores do n�mero 66 � 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0, soma = 0, x;

    printf("Digite o seu numero: ");
    scanf("%d", &num1);

    x = 1;

    while(x<=num1/2)
    {
        if(num1%x==0)
        {
            soma = soma + x;
        }

        x++;
    }
    printf("\nA soma dos divisores e: %d ", soma);
    return 0;
}
