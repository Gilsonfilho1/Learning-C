/*
10. Fa�a um programa que leia duas notas de um aluno, verifique se as notas s�o v�lidas e exiba na
tela a m�dia destas notas.
Uma nota v�lida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0,
onde caso a nota n�o possua um valor v�lido, este fato deve ser informado ao usu�rio e o
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
