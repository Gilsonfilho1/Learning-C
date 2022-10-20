/*
12. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o
maior e o menor valor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 1, num[5], maior = -1000, menor = 1000, posicao, posicao2;

    printf("Digite 5 valores\n");

        while(i<=5)
    {

    scanf("%d", &num[i]);

    if(maior < num[i])
    {
        maior = num[i];
        posicao = i;
    }

    if(menor > num[i])
    {
        menor = num[i];
        posicao2 = i;
    }

    i++;
    }

    printf("Maior: %d\n", maior);
    printf("Posicao do Maior: %d\n\n", posicao);

    printf("Menor: %d\n", menor);
    printf("Posicao do Menor: %d", posicao2);

    return 0;
}
