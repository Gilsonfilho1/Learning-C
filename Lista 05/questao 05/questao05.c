/*
5. Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse valor
na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5] [5] = {0}, i = 0, x = 0, valor = 0, verificacao = 0, localizacao1 = 0, localizacao2 = 0;

    printf("Digite os valores\n");

    while (i<4)
    {
        while (x<4)
        {
        scanf("%d", &matriz[i] [x]);
        x++;
        }
        i++;
        x = 0;
    }

    i = 0;
    x = 0;

    printf("Digite Valor de X: ");

    scanf("%d", &valor);

    while (i<4)
    {
        while (x<4)
        {
        if (matriz[i] [x] == valor)
        {
            valor = matriz[i] [x];
            verificacao++;
            localizacao1 = i;
            localizacao2 = x;
        }
        {
            
        }
        x++;
        }
        i++;
        x = 0;
    }


    if (verificacao == 0)
    {
        printf("Valor nao encontrado");
    }
    else
    {
        printf("Valor: %d \nLocalizacao: %d, %d", valor, localizacao1, localizacao2);
    }
    

    return 0;
}