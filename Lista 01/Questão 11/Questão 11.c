/*Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de conversão é: K = M * 3.6, sendo K a velocidade em km/h e
M em m/s.*/

#include <stdio.h>
int main(void){
float veloms;
float conversao;

printf("Digite o valor de uma velocidade em m/s:\n");
scanf("%f",&veloms);
conversao = veloms * 3.6;
printf("O valor da velocidade em convertida em km/h(quilometros por hora) eh:\n%.2fkm/h", conversao);

return 0;
}