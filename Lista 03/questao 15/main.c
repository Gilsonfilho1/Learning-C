/*
15. Faça um programa que leia um número inteiro positivo par N e imprima todos os números pares
de 0 até N em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, num2 = 0;
    printf("Digite um numero:");
    scanf("%d", &num);

    if (num%2!=0)
    {
        printf("Este valor e invalido!\n");
    }

    else
    {
    while(num2<=num)
    {
        printf("%d\n",num2);
        num2 = num2 + 2;
    }
    }
    return 0;
}
