/*
10. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;
    int i = 1, maior = 0, menor = 0;
    do
    {

        printf("Digite o %d Numero:", i);
        scanf("%d", &num);

    if (num>=maior || i==1)
        {
            maior = num;
        }
    if (num<=menor || i==1)
        {
            menor = num;
        }
     i++;
    }
    while(i<11);

    printf("o Maior numero e %d\n", maior);
    printf("o Menor numero e %d\n", menor);

    return 0;
}
