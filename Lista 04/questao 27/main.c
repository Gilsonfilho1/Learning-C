/*
27. Pe�a ao usu�rio para digitar dez valores num�ricos e ordene por ordem crescente esses valores.
Mostre ao final na tela os valores em ordem
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, num1[10], ordem, j = 0;
    printf("Digite 10 Numeros\n");

    while(i<=9)
    {
        scanf("%d", &num1[i]);
    i++;
    }

    i = 0;

    while(i<=9)
    {
        for (j=i+1; j<10; j++)
        {
            if(num1[i] > num1[j])
            {
                ordem = num1[i];
                num1[i] = num1[j];
                num1[j] = ordem;
            }
        }
        i++;
    }

    i = 0;

    while(i<=9)
    {
        printf("%d\n", num1[i]);
        i++;
    }

    return 0;
}
