/*
23. Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do
aluno e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais
alto. Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numalu[10], i = 1;
    float tamanho[10], maior = 0, menor = 5, nummaior, nummenor;

    while(i<=10)
    {
    numalu[i] = i;
    printf("Digite a Altura do aluno %d em Metros\n", i);
    scanf("%f", &tamanho[i]);
    i++;
    }

    i = 1; //RESET

    while(i<=10)
    {
        if (maior < tamanho[i])
        {
            maior = tamanho[i];
            nummaior = numalu[i];
        }
        if (menor > tamanho[i])
        {
            menor = tamanho[i];
            nummenor = numalu[i];
        }
    i++;
    }

    printf("Numero do aluno menor: %.0f\n", nummenor);
    printf("Tamanho do aluno menor: %.2f\n", menor);
    printf("Numero do aluno maior: %.0f\n", nummaior);
    printf("Tamanho do aluno maior: %.2f\n", maior);
    return 0;
}
