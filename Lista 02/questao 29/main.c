/*
29. Leia uma data e determine se ela � v�lida. Ou seja, verifique se o m�s est� entre 1 e 12, e se o dia
existe naquele m�s.

Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos n�o
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

    if (ano%400==0 || ano%4==0 && ano%100!=0) //Verifica��o de Ano Bissexto
    {
        bissexto++;
        //(bissexto = 1) = Ano bissexto.
        //(bissexto = 0) = Ano n�o bissexto.
    }

    if (bissexto==0) //if para os anos n�o bissextos.
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia <= 31 && mes<=12)
        //Os meses 1,3,5,7,8,10 e 12 = s�o os meses com 31 dias
        {
            printf("\n%i/%i/%i esta data e valida, este ano nao e bissexto\n", dia, mes, ano);
        }
        else if (dia > 31 || mes > 12 || mes < 1 || dia < 1 || ano < 1)
        //verifica��o se a data � valida
        {
            printf("\n%i/%i/%i esta data e invalida\n", dia, mes, ano);
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <= 30 && mes<=12)
        //Os meses 4,6,9 e 11 = s�o os meses com 30 dias
        {
            printf("\n%i/%i/%i esta data e valida, este ano nao e bissexto\n", dia, mes, ano);
        }
        else if (mes == 2 && dia <=28 && mes<=12)
        //Verifica��o se o m�s � fevereiro, caso ele for em ano n�o bissexto ele tera no m�ximo 28 dias.
        {
            printf("\n%i/%i/%i esta data e valida, este ano nao e bissexto\n", dia, mes, ano);
        }
            else if (mes == 2 && dia > 28)
        //Caso fevereiro tenha mais que 28 dias em anos n�o bissextos a data ser� invalida.
        {
            printf("\n%i/%i/%i esta data nao e valida\n", dia, mes, ano);
        }
    }

    else if (bissexto==1) //else if para os anos bissextos, poderia ser apenas um else.
    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia <= 31 && mes<=12)
        //Os meses 1,3,5,7,8,10 e 12 = s�o os meses com 31 dias
        {
            printf("\n%i/%i/%i esta data e valida, este ano e bissexto\n", dia, mes, ano);
        }
        else if (dia > 31 || mes > 12 || mes < 1 || dia < 1 || ano < 1)
        //verifica��o se a data � valida
        {
            printf("\n%i/%i/%i esta data e invalida\n", dia, mes, ano);
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia <= 30 && mes<=12)
        //Os meses 4,6,9 e 11 = s�o os meses com 30 dias
        {
            printf("\n%i/%i/%i esta data e valida, este ano e bissexto\n", dia, mes, ano);
        }
        else if (mes == 2 && dia <=29 && mes<=12)
        //Verifica��o se o m�s � fevereiro, caso ele for um ano bissexto ele tera no m�ximo 29 dias.

        {
            printf("\n%i/%i/%i esta data e valida, este ano e bissexto\n", dia, mes, ano);
        }
        else if (mes == 2 && dia > 29)
        //Caso fevereiro tenha mais que 29 dias em anos bissextos a data ser� invalida.

        {
            printf("\n%i/%i/%i esta data nao e valida\n", dia, mes, ano);
        }
    }
    return 0;
}
