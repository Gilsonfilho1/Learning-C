/*
22. Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto escalar
entre eles.
Os conjuntos têm 5 elementos cada.
Imprimir os dois conjuntos e o produto escalar,
sendo que o produto escalar é dado por: x1 * y1 + x2 * y2 + ... + xn * yn.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1[5], num2[5], i = 1, x, produto;

    printf("Digite o primeiro conjunto de 5\n");

    while(i<=5)
    {
        scanf("%d", &num1[i]);
        i++;
    }

    i = 1;

    printf("Digite o segundo conjunto de 5\n");

    while(i<=5)
    {
        scanf("%d", &num2[i]);
        i++;
    }

    printf("Digite o N do produto escalar\n");
    scanf("%d",&x);

    i = 1;

    while(i<=x)
    {
        produto = produto + (num1[i] * num2[i]);
        printf("%d ",produto);
        i++;
    }

    return 0;
}
