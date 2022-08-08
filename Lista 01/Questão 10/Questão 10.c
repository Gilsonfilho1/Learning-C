/*Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s (metros
por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M em m/s.*/

#include <stdio.h>
int main(void){
float veloKmh;
float conversao;

printf("Digite o valor de uma velocidade em km/h (quilometros por hora):\n");
scanf("%f",&veloKmh);
conversao = veloKmh/3.6;

printf("O valor da velocidade convertida em m/s (metros por segundo) eh:\n%.3fm/s", conversao);

return 0;
}
