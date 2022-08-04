/*
2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez deve
usar a estrutura de repetição for, a segunda while, e a terceira do while.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    for(num = 1; num <= 100; num++) //FOR
    {
        printf("%d\n",num);
    }
        printf("\n\n\n");
        num = 1;



    while(num <= 100) //WHILE

    {
        printf("%d\n",num);
        num++;
    }
        printf("\n\n\n");
        num = 1;



    do // DO WHILE
    {
        printf("%d\n",num);
        num++;
    }
    while(num <= 100);

    return 0;
}
