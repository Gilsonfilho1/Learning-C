/*
13. Escreva um programa que leia um número inteiro de três algarismos maior do que zero e devolva,
na tela, a soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá ao valor
8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a
mensagem: número invalido
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
