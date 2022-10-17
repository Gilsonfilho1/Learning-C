/*
13. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, num2 = 0;

    printf("Digite um numero:");
    scanf("%d", &num);

    while(num2<=num)
    {
        num2++;
        printf("%d\n",num2);
    }

    return 0;
}
