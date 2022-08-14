/*Leia um valor de área em acres e apresente-o convertido em metros quadrados m2.
A fórmula de conversão é: M = A * 4048.58, sendo M a área em metros quadrados e A a área em acres.*/

#include <stdio.h>
int main(void){
float acres;
float m2;

printf("Digite o valor de uma area em acres:\n");
scanf("%f", &acres);
m2 = acres * 4048.58;

printf("O valor convertido em metros quadrados eh:\n%.3f", m2);

return 0;
}