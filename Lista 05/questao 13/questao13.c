/*
13. Faça um programa que leia duas matrizes 2 x 2 com valores reais. Ofereça ao usuário um menu
de opções:
1 somar as duas matrizes
2 subtrair a primeira matriz da segunda
3 adicionar uma constante às duas matrizes
4 imprimir as matrizes
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz1[2][3] = {0}, matriz2[2][3] = {0}, matriz3 [2] [2], i = 0, x = 0, y = 0;

    printf("Digite a Matriz 1\n");

    while (x<2)
    {
        while (y<2)
        {
            scanf("%d", &matriz1[x][y]);
            y++;
        }
        x++;
        y = 0;
    }

    x = 0;

    printf("Digite a Matriz 2\n");
    
        while (x<2)
    {
        while (y<2)
        {
            scanf("%d", &matriz2[x][y]);
            y++;
        }
        x++;
        y = 0;
    }
    x = 0;

    printf("1 - Somar as Matrizes\n");
    printf("2 - Subtrair a primeira matriz da segunda\n");
    printf("3 - Adicionar uma constante as duas matrizes\n");
    printf("4 - Imprimir as Matrizes\n");
    printf("Digite qual destas opcoes voce deseja: ");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
    printf("A soma das Matriz e\n");
        while (x<2)
        {
            while (y<2)
            {
                matriz3[x] [y] = matriz1[x] [y] + matriz2[x] [y];
                printf("%d ", matriz3[x] [y]);
                y++;
            }
            printf("\n");
            x++;
            y = 0;
        }   
        break;
    case 2:
    printf("Subtracao da primeira pela segunda\n");
            while (x<2)
        {
            while (y<2)
            {
                matriz3[x] [y] = matriz1[x] [y] - matriz2[x] [y];
                printf("%d ", matriz3[x] [y]);
                y++;
            }
            printf("\n");
            x++;
            y = 0;
        } 
        break;

    case 3:
    printf("Digite a Constante\n");
    int c = 0;
    scanf("%d", &c);
    const co = c;

    matriz1[1][2] = co; 
    matriz2[1][2] = co; 
    matriz1 [2] [2] = 0;
    matriz2 [2] [2] = 0;

        printf("Matriz 1\n");
            while (x<2)
        {
            while (y<3)
            {
                printf("%d ", matriz1[x] [y]);
                y++;
            }
            printf("\n");
            x++;
            y = 0;
        }
        x = 0;

    printf("Matriz 2\n");
            while (x<2)
        {
            while (y<3)
            {
                printf("%d ", matriz2[x] [y]);
                y++;
            }
            printf("\n");
            x++;
            y = 0;
        }
    break;
    case 4:
    printf("Impressao das Matrizes\n");
    printf("Matriz 1\n");
            while (x<3)
        {
            while (y<2)
            {
                printf("%d ", matriz1[x] [y]);
                y++;
            }
            printf("\n");
            x++;
            y = 0;
        }
        x = 0;

    printf("Matriz 2\n");
            while (x<3)
        {
            while (y<2)
            {
                printf("%d ", matriz2[x] [y]);
                y++;
            }
            printf("\n");
            x++;
            y = 0;
        }


    break;
    
    default:
    printf("Opcao inexistente");
        break;
    }


    return 0;
}
