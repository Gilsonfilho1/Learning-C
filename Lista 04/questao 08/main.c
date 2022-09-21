/*
8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i = 1, num[6];

    printf("Digite os 6 valores\n");

    while(i<=6)
    {
        scanf("%d", &num[i]);
        i++;
    }

    while(i>=2)
    {   i--;
        printf("%d", num[i]);
    }

    return 0;
}
