/*Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas
pelo usuário e a leia. Em seguida, implemente uma função que receba um valor, retorne 1 caso o
valor esteja na matriz ou retorne 0 caso não esteja na matriz.*/
#include <stdio.h>
#include <stdlib.h>

int funcao(int **p, int linha, int coluna){
    int num = 0;
    int n = 0;
    int i;
    int j;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(num == *(*(p + i) + j)){

                n = 1;
                return n;
            }
        }
    }
    return n;
}

int main(){

    int **p;
    int linha;
    int coluna;
    int i;
    int j;
    int num;
    printf("Digite linha e coluna: ");
    scanf("%d %d", &linha, &coluna);

    p = (int**) malloc(linha * sizeof(int *));
    for(i = 0; i < linha; i++){
        p[i] = (int *) malloc(coluna * sizeof(int));
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Digite a matriz [%d] [%d]: ", i + 1, j + 1);
            scanf("%d", (*(p + i) + j));
        }
    }

    num = funcao(p, linha, coluna);
    
    printf("retorno: %d", num);

    for(i = 0; i < linha; i++){
        free(p[i]);
    }
    free(p);
    return 0;
}

