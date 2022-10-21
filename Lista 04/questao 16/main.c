/*
16. Faça um programa que leia um vetor de 5 posições para números reais e, depois, um código
inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for
2, mostre o vetor na ordem inversa. Caso, o código for diferente de 1 e 2 escreva uma mensagem
informando que o código é inválido.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, num [5], x;
    printf("Digite os 5 Numeros\n");

    while(i<=5)
    {
        scanf("%d",&num[i]);
        i++;
    }

    printf("Digite 1 para forma direta\n");
    printf("Digite 2 para forma inversa\n");
    scanf("%d", &x);

    switch(x)
    {
    case 1:
        i = 1;
        while (i<=5)
        {
            printf("%d", num[i]);
            i++;
        }

        break;

    case 2:
        i = 5;
        while (i>=1)
        {
            printf("%d", num[i]);
            i--;
        }

        break;
    default:
        printf("O valor digitado e invalido.");
        break;
    }
    return 0;
}
