/*
12. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
utilizando as seguintes fórmulas (onde h corresponde a altura):
1. Homens: (72.7 * h) - 58
2. Mulheres: (62.1 * h) - 44.7
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, pesoideal;
    char sexo;
    printf("Digite seu Sexo, M para Mulher, H para Homem\n");
    scanf("%s", &sexo);
    printf("Digite sua Altura\n");
    scanf("%f", &altura);

    if (sexo=='M', sexo=='m')
    {
        pesoideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal e: %.2f", pesoideal);
    }
    else if (sexo=='H', sexo=='h')
    {
        pesoideal = (72.7 * altura) - 58;
        printf("Seu peso ideal e: %.2f", pesoideal);
    }
    else
    {
     printf("Sexo nao encontrado ou peso invalido");
    }


    return 0;
}
