/*
13. Escreva um programa que leia um n�mero inteiro de tr�s algarismos maior do que zero e devolva,
na tela, a soma de todos os seus algarismos. Por exemplo, ao n�mero 251 corresponder� ao valor
8 (2 + 5 + 1). Se o n�mero lido n�o for maior do que zero, o programa terminar� com a
mensagem: n�mero invalido
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,soma;
    soma = 0;

    printf("Digite um numero:\n");
    scanf("%d",&num);
    if(num>0){
    while(num>0){
       soma=soma+num%10;
       num=num/10;

       }
       printf("A soma e:%d",soma);
       }

       else
        {
            printf("O numero eh invalido");
        }

   return 0;

}
