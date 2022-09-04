#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int i = 0, soma = 0;

    while(i<10)
    {
        i++;
        printf("Digite o %d Numero:", i);
        scanf("%d", &num[i]);
        soma = soma + num[i];
    }
    printf("A soma dos digitos sao: %d", soma);
    return 0;
}
