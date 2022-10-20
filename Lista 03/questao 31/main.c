/*
31. Leia um n�mero positivo do usu�rio, ent�o, calcule e imprima a sequ�ncia Fibonacci at� o
primeiro n�mero superior ao n�mero lido. Exemplo: se o usu�rio informou o n�mero 30, a
sequ�ncia a ser impressa ser� 0 1 1 2 3 5 8 13 21 34.
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
