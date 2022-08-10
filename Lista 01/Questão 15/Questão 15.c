/*Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é: G = R
* 180 / 𝜋, sendo G o ângulo em graus e R em radianos e 𝜋 = 3.14.*/
#include <stdio.h>
int main(void){
float radiano;
float grau;

printf("Digite um valor em radiano:\n");
scanf("%f", &radiano);
grau = radiano * 180 / 3.14;

printf("O valor convertido em graus eh:\n%.2f", grau);

return 0;
}