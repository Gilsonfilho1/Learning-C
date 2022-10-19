/*
19. Ler uma sequência de números inteiros e determinar se eles são pares ou não.
Deverá ser informado o número de dados lidos e número de valores pares.
O processo termina quando for digitado o número 1000.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    while (num!=1000)
    {
        printf("Digite um numero\n");
        scanf("%d",&num);

        if (num%2==0)
        {
            printf("Este numero e par\n");
        }
        else
        {
            printf("Este numero e impar\n");
        }
    }

    return 0;
}
