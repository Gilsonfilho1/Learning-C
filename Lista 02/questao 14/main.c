/*
14. Ler um n�mero inteiro. Se o n�mero lido for negativo, escreva a mensagem: n�mero invalido. Se
o n�mero for positivo, calcular o logaritmo na base 10 deste n�mero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, resultado;
    printf("Digite um Numero\n");
    scanf("%i",&num);

    if (num < 0)
    {
        printf("Numero Invalido\n");
    }
    else
    {
        resultado = log10(num);
        printf("O log de 10 deste numero e %i\n", resultado);
    }
    return 0;
}
