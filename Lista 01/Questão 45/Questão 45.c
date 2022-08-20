/*Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere outro
número formado pelos dígitos invertidos do número lido. Exemplo:
NúmeroLido = 123
NúmeroGerado = 321.
*/

#include <stdio.h>
int main (void){
int n0, n1, n2, n3;

printf("Digite um numero de 3 digitos positivo\n");
scanf("%d", &n0);

if (n0 > 10) {
    n1 = n0 % 10;
    n0 = n0 / 10;
    n2 = n0 % 10;
    n0 = n0 / 10;
    n3 = n0 % 10;
    n0 = n0 / 10;
   }

printf("O valor invertido eh:\n%d%d%d\n", n1, n2, n3);

return 0;
}   

