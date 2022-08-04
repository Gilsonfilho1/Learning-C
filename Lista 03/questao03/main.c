/*
Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
iniciando em 10 e terminando em 0.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int contagem;

    contagem = 10;
    while(contagem>=0)
    {
        printf("%d\n", contagem);
    contagem = contagem - 1;
    }

    return 0;
}
