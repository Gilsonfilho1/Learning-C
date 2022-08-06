/*1. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[6], i = 0, sep;

    printf("Digite o primeiro valor\n");
    scanf("%d",&num[1]);
    printf("Digite o segundo valor\n");
    scanf("%d",&num[2]);
    printf("Digite o terceiro valor\n");
    scanf("%d",&num[3]);
    printf("Digite o quarto valor\n");
    scanf("%d",&num[4]);
    printf("Digite o quinto valor\n");
    scanf("%d",&num[5]);
    printf("Digite o sexto valor\n");
    scanf("%d",&num[6]);

    printf("Primeiro: %d \n", num[1]);
    printf("Segundo: %d \n", num[2]);
    printf("Terceiro: %d \n", num[3]);
    printf("Quarto: %d \n", num[4]);
    printf("Quinto: %d \n", num[5]);
    printf("Sexto: %d \n", num[6]);

    return 0;
}
