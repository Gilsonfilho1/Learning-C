/*
14. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de
0 até N em ordem decrescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, ordem = 0;

    printf("Digite um numero:");
    scanf("%d", &num);


    while(num>=0)
    {
        printf("%d\n",num);
        num = num - 1;
    }
    return 0;
}
