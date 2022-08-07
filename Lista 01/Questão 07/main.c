/*Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A fórmula
de conversão é: C = 5.0 (F * 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em
Fahrenheit.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fah, resultado;

    printf("Digite os graus em Fahrenheit\n");
    scanf("%f", &fah);
    resultado = (fah - 32) * 5/9;
    printf("Em Fahrenheit e: %.2f \nEm Celsius e: %.2f\n", fah, resultado);

    return 0;
}
