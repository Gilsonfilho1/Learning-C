/*Escreva um programa que leia as coordenadas x e y de pontos no R
2 e calcule sua distância da
origem (0, 0).*/

#include <stdio.h>
int main(void){

float x,y,res,d;

 printf("digite o valor da Coordenada x:\t");
 scanf("%f", &x);
 printf("digite o valor da coordenada y:\t");
 scanf("%f", &y);
 res=(x * x)+(y * y);
 d=sqrt(res);
 printf("A distancia entre os dois pontos R(2) e: %.2f\n", d);

return 0;
}