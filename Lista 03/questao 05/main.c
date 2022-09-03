/*
5. Faça um programa que receba um número inteiro maior do que 1, e verifique se o número
fornecido é primo ou não
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i, count = 0;

    printf("\nDigite o Numero: ");
    scanf("%d", &num);

    if(num > 1){
        for(i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }

        if(count == 2) {
            printf("\nNumero Primo");
        } else {
            printf("\nNumero nao primo");
        }
    }
    return 0;
}
