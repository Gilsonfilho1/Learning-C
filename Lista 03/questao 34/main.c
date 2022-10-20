/*
34. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas do
chamado Triângulo de Floyd. Para n = 6, temos:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i = 1, j = 1, b = 0;

    printf("Digite um Numero: ");
    scanf("%d", &num);

    while(i<=num)
    {
        j = 1;
        while(j<=i)
        {
        b++;
        printf("%d ",b);
        j++;
        }
    i++;
    printf("\n");
    }
    return 0;
}
