/*
2. Fa�a um programa que leia um n�mero e informe se ele � positivo.
*/


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Digite um numero\n");
    scanf("%i",&num);
    if(num >= 0)
    {
        printf("%i e positivo", num);
    }
    else
    {
        printf("%i nao e positivo", num);
    }
    return 0;
}
