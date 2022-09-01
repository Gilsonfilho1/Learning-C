/*
29. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia
existe naquele mês.

Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não
bissextos.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dia, mes, ano, bissexto = 0; //Variaveis
    printf("Digite o Dia\n");
    scanf("%i",&dia);
    printf("Digite o Mes\n");
    scanf("%i",&mes);
    printf("Digite o Ano\n");
    scanf("%i",&ano);

    if (ano%400==0 || ano%4==0 && ano%100!=0) //Verificação de Ano Bissexto
    {
        bissexto++;
        //(bissexto = 1) = Ano bissexto.
        //(bissexto = 0) = Ano não bissexto.
    }

    if (bissexto==0) //if para os anos não bissextos.
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia <= 31 && mes<=12)
        //Os meses 1,3,5,7,8,10 e 12 = são os meses com 31 dias
        {
            printf("\n%i/%i/%i esta data e valida, este ano nao e bissexto\n", dia, mes, ano);
        }
        else if (dia > 31 || mes > 12 || mes < 1 || dia < 1 || ano < 1)
        //verificação se a data é valida
        {
            printf("\n%i/%i/%i esta data e invalida\n", dia, mes, ano);
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <= 30 && mes<=12)
        //Os meses 4,6,9 e 11 = são os meses com 30 dias
        {
            printf("\n%i/%i/%i esta data e valida, este ano nao e bissexto\n", dia, mes, ano);
        }
        else if (mes == 2 && dia <=28 && mes<=12)
        //Verificação se o mês é fevereiro, caso ele for em ano não bissexto ele tera no máximo 28 dias.
        {
            printf("\n%i/%i/%i esta data e valida, este ano nao e bissexto\n", dia, mes, ano);
        }
            else if (mes == 2 && dia > 28)
        //Caso fevereiro tenha mais que 28 dias em anos não bissextos a data será invalida.
        {
            printf("\n%i/%i/%i esta data nao e valida\n", dia, mes, ano);
        }
    }

    else if (bissexto==1) //else if para os anos bissextos, poderia ser apenas um else.
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia <= 31 && mes<=12)
        //Os meses 1,3,5,7,8,10 e 12 = são os meses com 31 dias
        {
            printf("\n%i/%i/%i esta data e valida, este ano e bissexto\n", dia, mes, ano);
        }
        else if (dia > 31 || mes > 12 || mes < 1 || dia < 1 || ano < 1)
        //verificação se a data é valida
        {
            printf("\n%i/%i/%i esta data e invalida\n", dia, mes, ano);
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <= 30 && mes<=12)
        //Os meses 4,6,9 e 11 = são os meses com 30 dias
        {
            printf("\n%i/%i/%i esta data e valida, este ano e bissexto\n", dia, mes, ano);
        }
        else if (mes == 2 && dia <=29 && mes<=12)
        //Verificação se o mês é fevereiro, caso ele for um ano bissexto ele tera no máximo 29 dias.

        {
            printf("\n%i/%i/%i esta data e valida, este ano e bissexto\n", dia, mes, ano);
        }
        else if (mes == 2 && dia > 29)
        //Caso fevereiro tenha mais que 29 dias em anos bissextos a data será invalida.

        {
            printf("\n%i/%i/%i esta data nao e valida\n", dia, mes, ano);
        }
    }
    return 0;
}
