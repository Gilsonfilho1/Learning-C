/*
16. A nota final de um estudante � calculada a partir de tr�s notas atribu�das entre o intervalo de 0 at�
10, respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final.

A m�dia das tr�s notas mencionadas anteriormente obedece aos pesos:

Trabalho de Laborat�rio: 2;
Avalia��o Semestral: 3;
Exame Final: 5.

De acordo com o resultado, mostre na tela se o aluno
est� reprovado (m�dia entre 0 e 2,9)
, de recupera��o (entre 3 e 4,9)
ou se foi aprovado. Fa�a todas as verifica��es necess�rias.
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
