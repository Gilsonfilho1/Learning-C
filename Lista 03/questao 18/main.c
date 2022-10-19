/*
18. Escreva um algoritmo que leia um n�mero inteiro entre 100 e 999 e imprima na sa�da cada um
dos algarismos que comp�em o n�mero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a, b, c;

    printf("Digite um numero entre 100 e 999: ");
    scanf("%d",&num);

    if (num>=100 && num<=999)

    {
        a = num % 10;

        b = num % 100;
        b = b - a;
        b = b/10;

        c = num % 1000;
        c = (c-b)-a;
        c = c / 100;

        printf("%d\n", c);
        printf("%d\n", b);
        printf("%d\n", a);
    }
    else
    {
        printf("N�mero Invalido");
    }


    return 0;
}
