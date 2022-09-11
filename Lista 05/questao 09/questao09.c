/*
9. Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz
gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da
diagonal principal. Imprima a matriz original e a matriz transformada
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, x = 0, matriz[4] [4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    printf("Matriz Original\n");

    while (i<4)
    {
        while (x<4)
        {
               printf("%d ", matriz [i] [x]); 
            x++;
        }
        printf("\n");
        i++;
        x = 0;
    }    

    i = 0; //reset
    x = 0; //reset

    while (i<4)
    {
        while (x<4)
        {
            if(x>i)
            {
                matriz [i] [x] = 0;
            }
            x++;
        }
        i++;
        x = 0;
    }

    i = 0; //reset
    x = 0; //reset

    printf("Matriz Triangular Inferior\n");


    while (i<4)
    {
        while (x<4)
        {
               printf("%d ", matriz [i] [x]); 
            x++;
        }
        printf("\n");
        i++;
        x = 0;
    }    

    return 0;
}
