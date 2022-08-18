/*Leia um número inteiro e imprima o seu antecessor e o seu sucessor.*/

#include <stdio.h>
int main(void){
int num, antecessor, sucessor ;

printf("Digite um numero inteiro:\n");
scanf("%d", &num);
antecessor = num - 1;
sucessor = num + 1;

printf("O antecessor e o sucessor desse numero sao respectivamente:\n%d e %d", antecessor, sucessor);

return 0;
}