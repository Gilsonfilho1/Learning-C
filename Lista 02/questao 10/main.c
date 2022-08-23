/*
10. Faça um programa que leia duas notas de um aluno, verifique se as notas são válidas e exiba na
tela a média destas notas.
Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0,
onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
programa termina.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, validade, mediafinal;
    printf("Digite a primeira nota\n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota\n");
    scanf("%f",&nota2);

    validade = nota1 + nota2;
    mediafinal = validade/2;

    if (mediafinal <= 10, mediafinal >= 0)
    {
    printf("\nSua media e %.2f\n", mediafinal);
    }
    else
    {
    printf("\nSuas notas nao possuem valor valido!\n");
    }
}
