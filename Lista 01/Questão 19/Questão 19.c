/*Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A fórmula de
conversão é: M = L / 1000 , sendo L o volume em litros e M o volume em metros cúbicos.*/

#include <stdio.h>
int main(void){
float litros;
float m3;

printf("Digite o um valor de volume em litros:\n");
scanf("%f", &litros);
m3 = litros / 1000;

printf("O valor convetido em metros cubicos eh:\n%.2f",m3);

return 0;
}