/*
22. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e, se
forem, se é um triângulo escaleno, equilátero ou isóscele.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ladodireito, ladoesquerdo, base;
    printf("Digite o valor do Lado direito:\n");
    scanf("%f", &ladodireito);

    printf("Digite o valor do Lado esquerdo:\n");
    scanf("%f", &ladoesquerdo);

    printf("Digite o valor da Base:\n");
    scanf("%f", &base);

    if ((ladodireito == ladoesquerdo) && (ladodireito == base) && (ladoesquerdo == base))
    {
        printf("Seu triangulo e equilatero, entao ele possui todas os lados iguais\n");
    }
    else
    {
        if ((base == ladoesquerdo) || (base == ladodireito) || (ladoesquerdo == ladodireito))
        {
            printf("Seu triangulo ee isosceles, entao ele possui somente dois lados iguais\n");
        }
        else
        {
            if ((ladodireito != ladoesquerdo) && (ladodireito != base) && (ladoesquerdo != base))
            {
                printf("Seu triangulo e escaleno, entao ele possui as todos os lados diferentes\n");
            }
        }
    }
}
