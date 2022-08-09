/*Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão
é: K = 1.61 * M, sendo K a distância em quilômetros e M em milhas*/

#include <stdio.h>
int main(void){
float milhas;
float KM;

printf("Digite o valor de uma distancia em milhas:\n");
scanf("%f", &milhas);
KM = 1.61 * milhas;

printf("O valor da distancia convertida em quilometros eh:\n%.3fkm",KM);

return 0;
}