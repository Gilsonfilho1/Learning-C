/*
25. Leia 10 números inteiros e armazene em um vetor.
Em seguida escreva os elementos que são primos e suas respectivas posições no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1 , x = 1 ,num1[10], primos[10], resultado = 0;


    printf("Digite 10 Numeros\n");

    while(i<=10)
    {
        scanf("%d",&num1[i]);
        primos[i] = i;
        i++;
    }

    i = 1;

    while(i<=10)
    {
        while(x <= num1[i] / 2)
        {
        if(num1[i]%x == 0)
            {
            resultado++;
            break;
            }
        x++;
        }

        if (resultado != 1)
        {
            printf("Poiscao %d, Numero %d\n", primos[i], num1[i]);
        }
        else
        {
        }

    i++;
    x = 2;
    resultado = 0;
    }


    return 0;
}
