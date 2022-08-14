/*Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2.
A fórmula de conversão é: M = H * 10000, sendo M a área em metros quadrados e H a área em hectares*/

#include <stdio.h>
int main(void){
float hect;
float m2;

printf("Digite um valor de area em hectares:\n");
scanf("%f", &hect);
m2 = hect * 10000;

printf("O valor convertido em metros quadrados eh:\n%.3f", m2);

return 0;
}