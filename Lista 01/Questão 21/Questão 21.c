/*Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
conversão é: K = L * 0.45, sendo K a massa em quilogramas e L a massa em libras.*/

#include <stdio.h>
int main(void){
float libras;
float quilo;

printf("Digite um valor de massa em libras:\n");
scanf("%f", &libras);
quilo = libras * 0.45;

printf("O valor convertido em quilogramas eh:\n%.2fkg",quilo);

return 0;
}