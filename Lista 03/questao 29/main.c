/*
29. Faça um programa que calcule a diferença entre a soma dos quadrados dos primeiros 100
números naturais e o quadrado da soma. Exemplo:
* A soma dos quadrados dos dez primeiros números naturais é:
(12 + 22 + ... + 102) = 385
* O quadrado da soma dos dez primeiros números naturais é:(1 + 2 + ... + 10) 2 = 3025
 A diferença entre a soma dos quadrados dos dez primeiros números naturais e o quadrado da
soma é: 3025-385 = 2640.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i = 0, j = 0, j2 = 1, soma1 = 0, soma2 = 0, quadrado = 0;
    printf("Digite um Numero: ");
    scanf("%d", &num);
    while(i<=num)
    {
        j2 = i*i;
        soma1 = soma1 + j2;
        i++;
    }
    while(j<=num)
    {
        soma2 = soma2 +j;
        j++;
    }
    soma2 = soma2 * soma2;

    printf("O valor da soma dos naturais %d\n", soma1);
    printf("A soma dos quadrado dos naturais %d\n", soma2);
    num = soma2 - soma1;
    printf("A diferenca e: %d", num);

    return 0;
}
