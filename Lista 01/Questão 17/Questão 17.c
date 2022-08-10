/* Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A
fórmula de conversão é: P = C / 2.54 , sendo C o comprimento em centímetros e P o comprimento
em polegadas.*/

#include <stdio.h>
int main(void){
float cm;
float polegadas;

printf("Digite um valor em centimetros:\n");
scanf("%f",&cm);
polegadas = cm / 2.54;

printf("O valor convertido em centimetros eh:\n%.2f",polegadas);

return 0;
}