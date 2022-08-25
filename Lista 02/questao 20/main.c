/*
20. Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as
básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois
valores numéricos e realiza a operação, mostrando o resultado e saindo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, resultado;
    int opcao;
    printf("Qual operacao Matematica voce deseja realizar?!\n");
    printf("\nSoma = 1\nSubtracao = 2\nMultiplicacao = 3\nDivisao = 4\n\n");
    scanf("%i", &opcao);
    printf("Digite o primeiro numero\n");
    scanf("%f",&num1);
    printf("Digite o primeiro numero\n");
    scanf("%f",&num2);

    switch(opcao)
        {
    case 1:
        resultado = num1 + num2;
        printf("\nO resultado e %.2f",resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("\nO resultado e %.2f",resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("\nO resultado e %.2f",resultado);
        break;
    case 4:
        resultado = num1 / num2;
        printf("\nO resultado e %.2f",resultado);
        break;
    default:
        printf("\nOpcao Invalido!");
        break;
        }
        return 0;
}
