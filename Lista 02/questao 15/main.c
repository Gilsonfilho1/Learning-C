/*
15. Fa�a um algoritmo que calcule a m�dia ponderada das notas de 3 provas.
A primeira e a segunda prova t�m peso 1 e a terceira tem peso 2.
Ao final, mostrar a m�dia do aluno e indicar se o aluno foi aprovado ou reprovado.
A nota para aprova��o deve ser igual ou superior a 60 pontos.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int prova1, prova2, prova3, resultado;
    printf("Digite Nota da prova 1!\n");
    scanf("%i", &prova1);
    printf("Digite Nota da prova 2!\n");
    scanf("%i", &prova2);
    printf("Digite Nota da prova 3!\n");
    scanf("%i", &prova3);

    resultado =(((prova1*1) + (prova2*1) + (prova3*2)) / (1+1+2));

    if (resultado > 60)
        {
            printf("Voce foi Aprovado com a Media %i\n", resultado);
        }
    else
        {
            printf("Voce nao foi Aprovado, sua media foi %i", resultado);
        }

    return 0;
}
