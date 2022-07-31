// Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas
// aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido
#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){

    int vet [N];
    int i;
    int dobro;
    for(i = 0; i < N; i++){
        printf("Digite o numero [%d]: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < N; i++){
        dobro = vet[i] * 2;
        printf("O dobro de %d eh: %d\n", vet[i], dobro);
    }





    return 0;
}