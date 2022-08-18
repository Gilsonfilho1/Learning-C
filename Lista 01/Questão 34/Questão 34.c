/*Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área 
do círculo é 𝜋 * raio 2, considere = 3.14.*/

#include <stdio.h>
int main(void){
float raio, area;

printf("Digite o valor do raio de um circulo:\n");
scanf("%f", &raio);
area = 3.14 * (raio * raio);

printf("O valor da areas do circulo eh:\n%.2f", area);

return 0;
}
