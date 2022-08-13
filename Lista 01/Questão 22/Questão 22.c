/*Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
conversão é: M = 0.91 * J, sendo J o comprimento em jardas e M o comprimento em metros.*/

#include <stdio.h>
int main (void){
float jardas;
float metros;

printf("Digite um valor de comprimento em jardas:\n");
scanf("%f",&jardas);
metros = 0.91 * jardas;

printf("O valor convertido em metros eh:\n%.2fm", metros);

return 0;
}