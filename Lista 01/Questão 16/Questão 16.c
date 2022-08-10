/*Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A fórmula
de conversão é: C = P * 2.54, sendo C o comprimento em centímetros e P o comprimento em
polegadas.*/
#include <stdio.h>
int main(void){
float polegadas;
float cm;

printf("Digite o valor de comprimento em polegadas:\n");
scanf("%f", &polegadas);
cm = polegadas * 2.54;

printf("O valor convertido em centimetros eh:\n%.2fcm", cm);

return 0;
}
