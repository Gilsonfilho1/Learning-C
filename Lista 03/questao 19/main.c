/*
19. Ler uma sequ�ncia de n�meros inteiros e determinar se eles s�o pares ou n�o.
Dever� ser informado o n�mero de dados lidos e n�mero de valores pares.
O processo termina quando for digitado o n�mero 1000.
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
