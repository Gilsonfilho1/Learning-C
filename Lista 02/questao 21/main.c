/*
21. Faça um programa para verificar se um determinado número inteiro é divisível por 3 ou 5, mas
não simultaneamente pelos dois.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("Digite o numero: ");
    scanf("%d",&num1);

    if(num1%5 == 0 || num1%5 == 5 && num1%3 == 0)
    {
        printf("Divisivel por 3 e 5");
    }
    else if(num1%5 == 0 || num1%5 == 5)
    {
        printf("O numero e divisivel por 5 mas nao por 3");
    }
    else if(num1%3 == 0)
    {
        printf("O numero e divisivel por 3 mas nao por 5");
    }
    else
    {
        printf("O numero nao e divisivel por 3 nem por 5");
    }
}
