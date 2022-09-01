/*
30. Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de acordo com a
tabela abaixo:
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, IMC;
    printf("Digite seu Peso\n");
    scanf("%f",&peso);
    printf("Digite sua altura\n");
    scanf("%f",&altura);

    IMC = peso / (altura*altura);

    if (IMC <=18.5)
    {
        printf("Voce esta abaixo do peso\n\n");
    }
    else if (IMC >=18.6, IMC <= 24.9)
    {
        printf("Voce esta saudavel");
    }
    else if (IMC >=25.0, IMC <= 29.9)
    {
        printf("Peso em exesso");
    }
    else if (IMC >=30.0, IMC <= 34.9)
    {
        printf("Obesidade Grau 1");
    }
    else if (IMC >=35.0, IMC <= 39.9)
    {
        printf("Obesidade Grau 2");
    }
    else if (IMC >= 40.0)
    {
        printf("Obesidade Grau 3");
    }

    return 0;
}
