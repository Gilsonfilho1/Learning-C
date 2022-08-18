/*Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.*/

#include <stdio.h>
int main(void){
int num;
int numt, numd;
int numst, numad;
int soma;

printf("Digite um numero inteiro:\n");
scanf("%d", &num);
numt = num * 3;
numd = num * 2;
numst = numt + 1;
numad = numd - 1;
soma = numst + numad;

printf("A soma do sucessor do triplo e o antecessor do dobro do numero eh:\n%d", soma);

return 0;
}