/*
5. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o
número ao quadrado
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num, resultado;

    printf("Digite um numero\n");
    scanf("%f",&num);
    if(num > 0)
    {
        resultado = sqrt(num);
        printf("\nRaiz de %.2f e %.2f \n", num, resultado);
    }
    else
    {
        resultado = num*num;
        printf("\nQuadrado de %.2f e %.2f! \n",num, resultado);
    }
    return 0;
}
