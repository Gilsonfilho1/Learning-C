/*
25. Em Matem�tica, o n�mero harm�nico designado por H(n) define-se como sendo a soma da serie
harm�nica:
1 H(n) = 1 + 1/2 + 1/3 + 1/4 + � + 1/n
Fa�a um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, x = 1, soma = 0;

    printf("Digite o numero \n");
    scanf("%f", &num1);

    while(x<=num1)
    {
        soma = soma + (1/x);
        x++;
    }

    printf("%f\n", soma);

    return 0;
}
