/*
16. Fa�a um programa que leia um n�mero inteiro positivo �mpar N e imprima todos os n�meros
�mpares de 1 at� N em ordem decrescente.
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, num2 = 1;
    printf("Digite um numero:");
    scanf("%d", &num);

    if (num%2==0)
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
