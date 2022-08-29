/*
26. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km/l e escreva uma mensagem
*/

#include <stdio.h>
#include<stdio.h>

int main()
{

    float km, litros, consumo;
    printf("Digite quantos litros foram consumidos\n");
    scanf("%f",&litros);

    printf("Digite a distancia pecorrida\n");
    scanf("%f",&km);

    consumo=km/litros;

    if (consumo < 8)
    {
        printf("Venda o Carro ele Nao e nada economico");
    }
    else if (consumo>=8 && consumo<=14)
    {
        printf ("Seu carro e economico");
    }
    else
    {
        printf("Seu carro e Super Economico");
    }
}
