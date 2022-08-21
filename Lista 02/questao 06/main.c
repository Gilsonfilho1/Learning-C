/*
6. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
1. O número digitado ao quadrado
2. A raiz quadrada do número digitado
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num, resultado, resultado2;

    printf("Digite um numero\n");
    scanf("%f",&num);
    if(num > 0)
    {
        resultado = sqrt(num);
        resultado2 = num*num;
        printf("\nRaiz de %.2f e %.2f \n", num, resultado);
        printf("\nQuadrado %.2f e %.2f \n", num, resultado2);
    }
    else
    {
        printf("\nNumero Invalido! \n");
    }
    return 0;
}
