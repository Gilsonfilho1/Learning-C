/*
18. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o m�s
correspondente a este n�mero. Isto �, janeiro se 1, fevereiro se 2, e assim por diante.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Escolha um numero correspondente a cada mes de 1 a 12\n");
    scanf("%d", &num);

    switch(num)
        {
    case 1:
        printf("Janeiro\n");
        break;
    case 2:
        printf("Fevereiro\n");
        break;
    case 3:
        printf("Marco\n");
        break;
    case 4:
        printf("Abril\n");
        break;
    case 5:
        printf("Maio\n");
        break;
    case 6:
        printf("Junho\n");
        break;
    case 7:
        printf("Julho\n");
        break;
    case 8:
        printf("Agosto\n");
        break;
    case 9:
        printf("Setembro\n");
        break;
    case 10:
        printf("Outubro\n");
        break;
    case 11:
        printf("Novembro\n");
        break;
    case 12:
        printf("Dezembro\n");
        break;
    default:
        printf("Numero Invalido\n");
        break;
        }
        return 0;
}
