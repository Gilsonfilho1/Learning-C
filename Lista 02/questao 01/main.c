/*
1. Faça um programa que leia um número e informe se ele é igual a zero.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Digite um numero\n");
    scanf("%i",&num);
    if(num == 0)
    {
        printf("%i e igual a 0", num);
    }
    else
    {
        printf("%i nao e igual a 0", num);
    }

    return 0;
}
