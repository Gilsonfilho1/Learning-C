/*Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres.
A fórmula de conversão é: A = M * 0.000247, sendo M a área em metros quadrados e A a área em acres.*/

#include <stdio.h>
int main(void){
float m2;
float acres;

printf("Digite um valor de area em metros quadrados:\n");
scanf("%f", &m2);
acres = m2 * 0.000247;

printf("O valor convertido em acres eh:\n%.5f", acres);

return 0;
}