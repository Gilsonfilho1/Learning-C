/*
23. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As
condições para aposentadoria são:
1. Ter pelo menos 65 anos
2. Ou ter trabalhado pelo menos 30 anos;
3. Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, servico;

    printf("Digite sua idade\n");
    scanf("%i", &idade);

    printf("Quantos anos de Servico\n");
    scanf("%i", &servico);

    if(idade >= 65)
    {
    printf("Voce pode se aposentar");
    }

    else if (servico >= 30)
    {
    printf("Voce pode se aposentar");
    }

    else if (servico >=25, idade >=60)
    {
    printf("Voce pode se aposentar");
    }
    else
    {
    printf("Voce nao pode se aposentar");
    }

    return 0;
}
