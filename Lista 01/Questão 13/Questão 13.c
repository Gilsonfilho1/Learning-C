/*Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de conversão
é: M = K / 1.61 , sendo K a distância em quilômetros e M em milhas.*/

#include <stdio.h>
int main(void){
float km;
float milhas;

printf("Digite o valor de uma distancia em quilometros(KM):\n");
scanf("%f", &km);
milhas = km / 1.61;

printf("O valor da distancia convertida em milhas eh:\n%.3f", milhas);

return 0;
}
