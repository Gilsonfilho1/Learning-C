/*
31. Leia um número positivo do usuário, então, calcule e imprima a sequência Fibonacci até o
primeiro número superior ao número lido. Exemplo: se o usuário informou o número 30, a
sequência a ser impressa será 0 1 1 2 3 5 8 13 21 34.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ant = 0, sup = 1, num;
    int t = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(t<=num)
    {
        t = sup + ant;
        sup = ant;
        ant = t;
        printf("%d\n",t);
    }
    return 0;
}
