/*
6. Faça um programa que conte quantos números primos existem entre a e b, onde a e b são números
informados pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, contador = 0, num1, num2, contadordeprimos = 0;

    printf("\nDigite o valor de A: ");
    scanf("%d", &num1);
    printf("\nDigite o valor de B: ");
    scanf("%d", &num2);

    for(j = num1; j <= num2; j++) {
        for(i = 1; i <= j; i++) {
            if(j % i == 0) {
                contador++;}
                }

        if(contador == 2) {
            printf("\n%d - Numero Primo", j);
            contadordeprimos++;
            }

        else {
            printf("\n%d - Numero nao primo", j);
        }

        contador = 0;
    }
    printf("\n%d Numeros sao primos", contadordeprimos);
    return 0;
}
