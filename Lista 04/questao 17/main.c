/*
17. Faça um programa que leia um vetor de 10 números. Leia um número x.
Conte os múltiplos de um número inteiro x num vetor e mostre-os na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, num[10], x;
    printf("Digite 10 numeros\n");

    while(i<=10)
    {
        scanf("%d", &num[i]);
        i++;
    }

    i = 0;

    printf("Digite o X\n");
    scanf("%d", &x);

    while(i<=num[x]/2)
    {
        i++;
        if (num[x]%i==0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
