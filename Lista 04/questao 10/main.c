/*
10. Faça um programa para ler a nota da prova de 5 alunos e armazene num vetor, calcule e imprima
a média geral.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, notas[5], media = 0;

    while(i<=5)
    {
    printf("Digite a nota do %d aluno: ", i);
    scanf("%d", &notas[i]);

    media = media + notas[i];

    i++;
    }

    media = media/5;

    printf("Media geral: %d", media);

    return 0;
}
