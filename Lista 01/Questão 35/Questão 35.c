/*Sejam a e b os catetos de um triângulo retângulo, faça um programa que receba os valores de a e
b e calcule o valor da hipotenusa. Imprima o resultado.*/

#include <stdio.h>
#include <math.h>
int main(void){
float cateto1, cateto2;
float hipotenusa;

printf("Digite o valor do primeiro cateto:\n");
scanf("%f", &cateto1);
printf("Digite o valor do segundo cateto:\n");
scanf("%f", &cateto2);

hipotenusa = sqrt( (cateto1 * cateto1) + (cateto2 * cateto2) );

printf("O valor da hipotenusa do triangulo eh:\n%.2f", hipotenusa);

return 0;
}