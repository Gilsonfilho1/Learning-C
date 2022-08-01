//Faça um programa que leia um número real e o imprima.

#include <stdio.h>
int main(void){
float num;

printf("Digite um numero inteiro:\n");
scanf("%f",&num);
printf("O numero inteiro digitado foi:\n%.2f", num);

return 0;
}