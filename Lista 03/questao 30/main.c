/*
30. Fa�a um programa que leia um n�mero indeterminado de idades de indiv�duos (pare quando for
informada a idade 0) e calcule a idade m�dia desse grupo
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 1, soma = 0, media = 0, i = 0;

    while(idade!=0, idade>0)
    {
        printf("Digite uma idade '0' para finalizar o programa: ");
        scanf("%d", &idade);
        soma = idade + soma;
        if (idade>0)
        {
            i++;
        }
    }
    printf("A soma das idades e: %d\n", soma);

    media = soma / i;

    printf("A idade media e: %d ", media);

    return 0;
}
