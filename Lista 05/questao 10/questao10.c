/*
10. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo.
Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter
números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    srand(time(NULL));
    int i = 0, x = 0, y = 0, l = 0, c = 0, cartela [5] [5];
    i = 0;
    x = 0;

    while (i<5)
    {
        while (x<5)
        {
            cartela[i] [x] = rand()%100;
            x++;
        }
        i++;
        x = 0;
    }

    i = 0;
    x = 0;

    while (i<5)
    {
        while (x<5)
        {
            while (y<5)
            {
            if (cartela[i] [x] == cartela[l] [c])
            {
                y--;
                cartela[i] [x] = rand()%100;
                c--;
                printf("debug\n");
                
            }
            else
            {
                y++;
                c++;
            }
            if ( c = 5)
            {
            l++;
            c = 0;
            }
            
            }
            x++;
            l = 0;
            c = 0;
        }
        i++;
        x = 0;
        y = 0;
        c = 0;
    }

    i = 0;
    x = 0;
    
    while (i<5)
    {
        while (x<5)
        {
            printf("%d ", cartela[i] [x]);
            x++;
        }
        printf("\n");
        i++;
        x = 0;
    }

    return 0;
}
