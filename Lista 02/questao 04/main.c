/*
4. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do
número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    float resultado;
    printf("Digite um numero\n");
    scanf("%i",&num);
    if(num > 0)
    {
        resultado = sqrt(num);
        printf("\nRaiz de %i e %.2f \n", num, resultado);
    }
    else
    {
        printf("\nNumero Invalido! \n");
    }

    return 0;
}
