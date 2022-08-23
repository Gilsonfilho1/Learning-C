/*
11. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: Emprestimo não concedido, caso contrário imprima: Emprestimo concedido.
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
