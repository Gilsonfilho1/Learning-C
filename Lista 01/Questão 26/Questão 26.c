/*Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares.
A fórmula de conversão é: H = M * 0.0001, sendo M a área em metros quadrados e H a área em hectares.*/

#include <stdio.h>
int main(void){
float m2;
float hectar;

printf("Digite um valor de area em metros quadrados:\n");
scanf("%f", &m2);
hectar = m2 * 0.0001;

printf("O valor convertido em hectares eh:\n%.4f", hectar);

return 0;
}