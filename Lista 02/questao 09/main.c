/*
9. Fa�a um programa que receba dois n�meros e mostre o maior. Se por acaso, os dois n�meros
forem iguais, imprima a mensagem: n�meros iguais.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, num2;
    printf("Digite o primeiro numero\n");
    scanf("%i",&num);
    printf("Digite segundo numero\n");
    scanf("%i",&num2);

    if(num > num2)
    {
        printf("\n%i e maior que %i\n", num, num2);
    }
    else if (num < num2)
    {
        printf("\n%i e maior que %i\n", num2, num);
    }
    else
    {
        printf("\n%i e igual a %i\n", num2, num);
    }
    return 0;
}
