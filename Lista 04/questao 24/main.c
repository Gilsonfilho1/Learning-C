/*
24. Fa�a um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que n�o
s�o m�ltiplos de 7.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, x = 1, num[100] = {0};

    while(i<=115)
    {
        if(i%7!=0)
        {
        num[x] = i;
        x++;
        }
    i++;
    }

    i = 1;

    while(i<=99)
    {
        printf("%d\n", num[i]);
        i++;
    }
    return 0;
}
