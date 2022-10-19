/*
20. Faça um programa que receba dois números. Calcule e mostre:
1 a soma dos números pares desse intervalo de números, incluindo os números digitados;
2 a multiplicação dos números ímpares desse intervalo, incluindo os digitados;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[2], x, z;
    int soma =0, mult=1;

    printf("digite o primeiro e o segundo numero \n");
    scanf("%d %d", &num[0], &num[1]);

    if (num[0] == num[1]){
        printf("Nao existe intervalo entre eles");
    }
    else
        {
    if (num[0]>num[1]){
        x=num[1];
        z=num[0];
    }
    if (num[1]>num[0]){
        x=num[0];
        z=num[1];
    }

    while (x<=z){
        if (x%2!=0){
            mult = mult *x;
        }
        if (x%2==0){
            soma = soma +x;
        }
        x++;
    }
    printf("a soma e %d \n", soma);
    printf("a multiplicacao e %d \n", mult);
    } // Final Else
    return 0;
}
