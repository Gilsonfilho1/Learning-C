/*
4. Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo, calcule a raiz quadrada do
n�mero. Se o n�mero for negativo, mostre uma mensagem dizendo que o n�mero � inv�lido.
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
