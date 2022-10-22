/*
Leia 10 n�meros inteiros e armazene em um vetor v.
Crie dois novos vetores v1 e v2.
Copie os valores impares de v para v1, e os valores pares de v para v2. Imprima v1 e v2.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10] = {0}, v1[10] = {0}, v2[10] = {0}, i = 1;
    printf("Digite 10 Numeros\n");

    while(i<=10)
    {

        scanf("%d", &v[i]);
        if(v[i]%2==0)
        {
            v2[i] = v[i];
        }
        else
        {
            v1[i] = v[i];
        }
    i++;
    }

    i = 1; //reset

    printf("V1\n");
    while(i<=10)
    {
        printf("%d\n", v1[i]);
        i++;
    }

    i = 1; //RESET

    printf("V2\n");
    while(i<=10)
    {
        printf("%d\n", v2[i]);
        i++;
    }


    return 0;
}
