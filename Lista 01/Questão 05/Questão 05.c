//Leia um número real e imprima a quinta parte deste número.

#include <stdio.h>
int main(void){
float num;
float divisao;

printf("Digite um numero inteiro:\n");
scanf("%f", &num);
divisao = num / 5;

printf("A quinta parte desse numero eh:\n%.2f", divisao);

return 0;
}