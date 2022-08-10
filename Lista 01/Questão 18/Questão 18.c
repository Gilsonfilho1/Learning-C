/*Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A fórmula de
conversão é: L = 1000 * M, sendo L o volume em litros e M o volume em metros cúbicos.*/

#include <stdio.h>
int main(void){
float m3;
float litro;

printf("Digite um valor de volume em metros cubicos:\n");
scanf("%f", &m3);
litro = 1000 * m3;

printf("O valor convertido em litros eh:\n%.2fL", litro);

return 0;
}