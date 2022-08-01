// Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
// dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos dos números são
// pares e quantos são ímpares.
#include <stdlib.h>
#include <stdio.h>

int main(){

int i;
int tam;
int *p;
int count = 0;
int impares;

printf("Digite o tamanho do vetor: ");
scanf("%d", &tam);

p = (int *) malloc(tam * sizeof(int));

for(i = 0; i < tam; i++){
    printf("Digite o numero [%d]: ", i + 1);
    scanf("%d", p + i);
}

for(i = 0; i < tam; i++){
    if(*(p+i) %2 == 0){
        count++;
    }
}
impares = tam - count;
printf("Pares: %d\nImpares: %d", count, impares);


    free(p);
    return 0;
}
