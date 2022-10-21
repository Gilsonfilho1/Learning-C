/*
15. Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores
negativos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10], i = 1;
    printf("Digite os 10 numeros\n");

    while(i<=10)
    {
        scanf("%d", &num[i]);
        i++;
    }

    i = 1;

printf("\n");

    while(i<=10)
    {
        if(num[i]<0)
        {
          num[i] = 0;
        }
    printf("%d\n", num[i]);
        i++;
    }

    return 0;
}
