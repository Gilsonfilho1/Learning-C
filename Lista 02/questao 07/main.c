/*
7. Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou �mpar
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

   int num;
   printf("Digite o numero\n");
   scanf("%i", &num);

if(num % 2 == 0)
    {
    printf("\n%i e Par\n", num);
    }

else
    {
    printf("\n%i e Impar\n", num);
    }
}
