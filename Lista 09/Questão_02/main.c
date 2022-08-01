#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){

    int vet [N];
    int i;
    int *p;
    p = vet;
    int dobro;
    for(i = 0; i < N; i++){
        printf("Digite o numero [%d]: ", i + 1);
        scanf("%d", vet[i]);
    }

    dobro = vet[i] * 2;
    for(i = 0; i < N; i++){
        printf("O dobro de %d eh: %d", vet[i], dobro);
    }





    return 0;
}


