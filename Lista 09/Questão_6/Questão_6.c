/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de
cada posição desse array*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float vet[10];
    int i;
    int *p;
    p = vet;
    for(i = 0; i < 10; i++){
        printf("Digite o numero [%d]: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++){
        printf("endereco de memoria [%d]: %d\n", i + 1, p++);
    }



    return 0;
}