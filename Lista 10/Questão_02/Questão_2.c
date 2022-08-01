/*Crie um programa que:
. Aloque dinamicamente um array de 5 números inteiros,
. Peça para o usuário digitar os 5 números no espaço alocado,
. Mostre na tela os 5 números,
. Libere a memória alocada*/

#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(){

    int *p;
    int i;

    p = (int *) malloc(N * sizeof(int));

    for(i = 0; i < N; i++){
        printf("Digite o numero [%d]: ", i + 1);
        scanf("%d", (p + i));
    }

    for(i = 0; i < N; i++){
    printf("numero [%d]: %d\n", i + 1, *(p + i));
    }
    
    free(p);
    return 0;
}