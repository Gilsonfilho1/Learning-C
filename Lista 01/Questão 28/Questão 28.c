/*Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.*/

#include <stdio.h>
int main(void){
float num1, num2, num3;
float num1q, num2q, num3q;
float soma;

printf("Digite o primeiro valor:\n");
scanf("%f", &num1);
printf("Digite o segundo valor:\n");
scanf("%f", &num2);
printf("Digite o terceiro valor:\n");
scanf("%f", &num3);
num1q = num1 * num1;
num2q = num2 * num2;
num3q = num3 * num3;
soma = num1q + num2q + num3q;

printf("O valor da soma dos quadrados dos tres valores eh:\n%.3f", soma);

return 0;
}