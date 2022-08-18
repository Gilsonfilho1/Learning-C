/* Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em
vista que o desconto foi de 12%*/

#include <stdio.h>
int main(void){
float valor, desconto, porcentagem;

printf("Digite o valor do produto:\n");
scanf("%f", &valor);

porcentagem = (valor * 17)/100;
desconto = valor - porcentagem;

printf("O valor do produto com desconto de 17 porcento eh:\n%.2fR$",desconto);


return 0;
}