/*
11. Leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. Se a presta��o for
maior que 20% do sal�rio imprima: Emprestimo n�o concedido, caso contr�rio imprima: Emprestimo concedido.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, prestacao, resultado;
    printf("Digite o valor do Salario\n");
    scanf("%f",&salario);
    printf("Digite o valor da Prestacao\n");
    scanf("%f",&prestacao);

    resultado = salario * 0.20;

    if(resultado > prestacao)
    {
        printf("Emprestimo Concedido\n");
    }
    else
    {
        printf("Emprestimo NAO Concedido\n");
    }

    return 0;
}
