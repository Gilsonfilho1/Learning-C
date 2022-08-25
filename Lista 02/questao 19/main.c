/*
19. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
1. A = (basemaior + basemenor) * altura / 2
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basemaior, basemenor, altura, area;

    printf("Insira a Base Maior do Trapezio!\n");
    scanf("%f", &basemaior);
    printf("Insira a Base Menor do Trapezio!\n");
    scanf("%f", &basemenor);
    printf("Insira a Altura do Trapezio!\n");
    scanf("%f", &altura);

    area = ((basemaior + basemenor) * altura / 2);

    if (basemaior > 0, basemenor > 0)
    {
    printf("A area do seu Trapezio e: %.2fcm quadrados",area);
    }

    else
    {
    printf("A Base Menor ou Maior nao podem ser maior que 0\n");
    }

    return 0;
}
