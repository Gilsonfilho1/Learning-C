/*
27 Faça um programa que calcule e escreva o valor de S
 S = 1/1 + 3/2 + 5/3 + 7/4 + … + 99/50
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num[2], soma = 0;
    num[1] = 1;
    num[2] = 1;
    while(num[1]<100 && num[2]<51)
    {
        soma = soma + num[1]/num[2];
        num[1] = num[1] + 2;
        num[2]++;
        }
    printf("O valor e: %f", soma);
    return 0;
}
