// 8. Leia uma matriz de 3 x 3 elementos. Imprima sua transposta

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0, x = 0, matriz[3][3], transi[3][3];

    while (i<3)
    {
        while (x<3)
        {
            scanf("%d", &matriz[i][x]);
            x++;
        }
        i++;
        x = 0;
    }

    i = 0; //reset
    x = 0; //reset

    printf("Matriz Original\n\n");

        while (i<3)
    {
        while (x<3)
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

            while (i<3)
    {
        while (x<3)
        {
            transi [x] [i] = matriz[i] [x];
            x++;
        }
        i++;
        x = 0;
    }

    i = 0; //reset
    x = 0; //reset
    
        printf("Matriz transposta\n\n");

        while (i<3)
    {
        while (x<3)
        {
            printf("%d ", transi [i] [x]);
            x++;
        }
        printf("\n");
        i++;
        x = 0;
    }

    return 0;
}
