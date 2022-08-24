/*
17. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana
correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por diante
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Escolha um dia da semana em numero\n");
    scanf("%d", &num);

    switch(num)
        {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-Feira\n");
        break;
    case 3:
        printf("Terca-Feira\n");
        break;
    case 4:
        printf("Quarta-Feira\n");
        break;
    case 5:
        printf("Quinta-Feira\n");
        break;
    case 6:
        printf("Sexta-Feira\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("Numero Invalido\n");
        break;
        }
        return 0;
}
