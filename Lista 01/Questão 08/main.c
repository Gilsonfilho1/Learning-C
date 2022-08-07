/*8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula de
conversão é: C = K - 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kelvin, resultado;

    printf("Digite os graus em Kelvin\n");
    scanf("%f", &kelvin);
    resultado = kelvin - 273.15;
    printf("Em Kelvin e: %.2f \nEm Celsius e: %.2f\n", kelvin, resultado);

    return 0;
}
