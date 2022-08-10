/*Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: R = G
* 𝜋 /180, sendo G o ângulo em graus e R em radianos e 𝜋 = 3.14.*/

#include <stdio.h> 
int main(void){
float graus;
float radianos;

printf("Digite o valor de um angulo(grau):\n");
scanf("%f", &graus);
radianos = graus * 3.14 /180;

printf("O valor convertido em radianos eh:\n%.3f", radianos);

return 0;
}