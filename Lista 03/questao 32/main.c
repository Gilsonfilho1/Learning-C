/*
32. Faça um algoritmo que converta uma velocidade expressa em km/h para m/s e vice versa. Você
deve criar um menu com as duas opções de conversão e com uma opção para finalizar o
programa. O usuário poderá fazer quantas conversões desejar, sendo que o programa só será
finalizado quando a opção de finalizar for escolhida.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float km, m;
    printf("//////////////////\n");
    printf("KM/H PARA M/S DIGITE 1\n");
    printf("M/S PARA KM/H DIGITE 2\n");
    printf("//////////////////\n");
    printf("Digite 1 ou 2, ou 3 para sair\n");
    scanf("%d", &i);

    while(i!=0, i<=2)
    {
        switch(i)
        {
        case 1:
            printf("Digite os KM/H\n");
            scanf("%f",&km);
            m = km / 3.6;

            printf("O valor de KM/H para M/S e %.2f\n\n", m);
            break;

        case 2:
            printf("Digite os M/S\n");
            scanf("%f",&m);
            km = m * 3.6;

            printf("O valor de M/S para KM/H e %.2f\n\n", km);

            break;

        default:
            break;
        }
    printf("//////////////////\n");
    printf("KM/H PARA M/S DIGITE 1\n");
    printf("M/S PARA KM/H DIGITE 2\n");
    printf("//////////////////\n");
    printf("Digite 1 ou 2, ou 3 para sair\n");
    scanf("%d", &i);
    }
    return 0;
}
