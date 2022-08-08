/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula de
conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/

#include <stdio.h>
int main(void){
float tempC;
float conversao;

printf("Digite o valor de uma temperatura em graus Celsius:\n");
scanf("%f", &tempC);
conversao = tempC + 273.15;

printf("O valor da temperatura em graus Kelvin eh:\n%.2fK", conversao);
return 0;
}