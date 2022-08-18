/*Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas
no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.*/

#include <stdio.h>
int main(void){
float valorhora;
float horas;
float valor;
float aumento;
float valortotal;

printf("Digite o valor das horas de trabalho:\n");
scanf("%f", &valorhora);
printf("Digite a quantidade de horas trabalhadas:\n");
scanf("%f", &horas);

valor = valorhora * horas;
aumento = (valor * 10)/100;
valortotal = valor + aumento;

printf("O funcionario ira receber:\n%.2fR$", valortotal);

return 0;
}