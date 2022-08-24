/*
16. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até
10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final.

A média das três notas mencionadas anteriormente obedece aos pesos:

Trabalho de Laboratório: 2;
Avaliação Semestral: 3;
Exame Final: 5.

De acordo com o resultado, mostre na tela se o aluno
está reprovado (média entre 0 e 2,9)
, de recuperação (entre 3 e 4,9)
ou se foi aprovado. Faça todas as verificações necessárias.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trabalholab, avseme, exafim, resultado;
    printf("Digite Nota do Trabalho de Laboratorio!\n");
    scanf("%i", &trabalholab);
    printf("Digite Nota da Avaliacao Semestral 2!\n");
    scanf("%i", &avseme);
    printf("Digite Nota do Exame Final 3!\n");
    scanf("%i", &exafim);

    resultado =(((trabalholab*2) + (avseme*3) + (exafim*5)) / (2+3+5));

    if (resultado >= 0, resultado <= 2.9)
        {
            printf("Voce foi Reprovado com a Media %i\n", resultado);
        }
    else if (resultado >= 3 , resultado <= 4.9)
        {
            printf("Voce esta de recuperacao, com a media de %i\n", resultado);
        }
    else
        {
            printf("Voce foi aprovado com a media de %i\n", resultado);
        }
    return 0;
}
