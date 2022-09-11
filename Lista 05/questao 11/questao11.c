/*
11. Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva o número de
alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2, e o número
de alunos cuja pior nota foi na prova 3.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float notaAluno[3][10], piorNota; 
    int piorProva[3] = {0, 0, 0}, i, j, provaPiorNota;
    srand(time(NULL));

    for (i=0; i<3; i++){
        for (j=0; j<10; j++){
            notaAluno[i][j] = rand() % 10;
        }
    }

    for (i=0; i<3; i++){
        for (j=0; j<10; j++){
            printf("%.0f  ", notaAluno[i][j]);
        }
        printf("\n");
    }
    for (j=0; j<10; j++){
        for (i=0; i<3; i++){
            if  (i == 0) {
                piorNota = notaAluno[0][j];
                provaPiorNota = i;

            }if (notaAluno[i][j] < piorNota) {
                piorNota = notaAluno[i][j];
                provaPiorNota = i;
            }
        }
        piorProva[provaPiorNota]++;
    }

    for(i=0; i<3; i++){
        printf("%d Alunos foram pior na prova %d \n", piorProva[i], i+1);
    }

    return 0;
}