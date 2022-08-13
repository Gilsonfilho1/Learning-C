/*Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
conversão é: J = M / 0.91 , sendo J o comprimento em jardas e M o comprimento em metros.*/

#include <stdio.h>
int main(void){
float metros;
float jardas;

printf("Digite um valor de comprimento em metros:\n");
scanf("%f", &metros);
jardas = metros / 0.91;

printf("O valor convertido em jardas eh:\n%.2f", jardas);

return 0;
}