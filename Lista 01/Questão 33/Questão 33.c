/*Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.*/

#include <stdio.h>
int main(void){
float lado, area;

printf("Digite o valor do lado de um quadrado:\n");
scanf("%f", &lado);
area = lado * lado;

printf("O valor da area do quadrado eh:\n%.2f", area);

return 0;
}