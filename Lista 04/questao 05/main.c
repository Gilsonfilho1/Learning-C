//5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, num[10], contagem = 0;

    printf("Digite os 10 valores\n");

    while(i<=10)
    {

    scanf("%d", &num[i]);
    i++;
    }

    i = 1;

    while(i<=10)
    {
    if (num[i]%2==0)
    {
        printf("%d ", num[i]);
        contagem++;
    }
    i++;
    }
    printf("\nEle possui %d valores pares", contagem);

    return 0;
}
