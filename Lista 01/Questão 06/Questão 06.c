/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula
de conversão é: F = C * (9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius.*/

#include <stdio.h>
int main(void){
float temp;
float conversao;

printf("Digite o valor de uma temperatura em graus Celsius:\n");
scanf("%f", &temp);
conversao = temp * (9.0/5.0)+32.0;

printf("Essa temperatura em graus Fahrenheit eh:\n%.2fF", conversao);
return 0;
}
