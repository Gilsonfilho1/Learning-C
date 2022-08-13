/*Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
conversão é: L = K / 0.45 , sendo K a massa em quilogramas e L a massa em libras*/
#include <stdio.h>
int main(void){
float quilo;
float libras;

printf("Digite um valor de massa em quilogramas:\n");
scanf("%f",&quilo);
libras = quilo / 0.45;

printf("O valor convertido em libras eh:\n%.2f", libras);

return 0;
}