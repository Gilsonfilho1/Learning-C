/*Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.*/

#include<stdio.h>
int main(void){
float valor;
float dias;
float total;
float desconto;
float totaldesconto;

printf("Digite a quantidade de dias trabalhadas pelo encanador:\n");
scanf("%f", &dias);

valor = 30;
total = valor * dias;
desconto = ((total*8)/100);
totaldesconto = total - desconto;

printf("O encanador ira receber:\n%.2fR$", totaldesconto);


return 0;
}