/*
6. Fa�a um programa que receba do usu�rio um vetor com 10 posi��es. Em seguida dever� ser
impresso o maior e o menor elemento do vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, num[10], maior = -1000, menor = 10000;

    printf("Digite 10 valores\n");

        while(i<=10)
    {

    scanf("%d", &num[i]);

    if(maior < num[i])
    {
        maior = num[i];
    }
        if(menor > num[i])
    {
        menor = num[i];
    }

    i++;
    }

    printf("Menor: %d, Maior: %d", menor, maior);


    return 0;
}
