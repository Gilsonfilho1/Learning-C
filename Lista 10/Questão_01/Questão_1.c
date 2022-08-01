// Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
// dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.
#include <stdio.h>
#include <stdlib.h>
 
int main () {
    int *p, n, i;
 
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
 
    p = (int *)malloc(n * sizeof(int));
 
    for (i = 0; i < n; i++) {
        printf("Digite o valor do numero %d: ", i+1);
        scanf("%d", p+i);
    }
    for (i = 0; i < n; i++) {
        printf("\nO valor do numero %d e: %d", i+1, *(p+i));
    }
 
    free(p);
    return 0;
}
