/*
15. Fa�a um programa que leia um n�mero inteiro positivo par N e imprima todos os n�meros pares
de 0 at� N em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, num2 = 0;
    printf("Digite um numero:");
    scanf("%d", &num);

    if (num%2!=0)
    {
        printf("Este valor e invalido!\n");
    }

    else
    {
    while(num2<=num)
    {
        printf("%d\n",num2);
        num2 = num2 + 2;
    }
    }
    return 0;
}
