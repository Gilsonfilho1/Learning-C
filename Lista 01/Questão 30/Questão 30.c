/*Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.*/

#include <stdio.h>
int main(void){
float real, dolar, resultado;

printf("Digite o valor em Real:\n");
scanf("%f", &real);
printf("Cotacao do Dolar:\n");
scanf("%f", &dolar);

resultado = real / dolar;

 printf("A conversao fica $%.2f\n", resultado);



return 0;
}