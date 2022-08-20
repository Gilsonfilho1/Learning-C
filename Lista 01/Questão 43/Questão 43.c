/*Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a
escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.*/

#include <stdio.h>
int main(void){
int degrau, altura ,alturacm;
float quantidadededegraus;

printf("Informe a altura do degrau em centimetros\n");
scanf("%d",&degrau);
printf("Informe a altura que deseja alcancar em metros\n");
scanf("%d",&altura);

alturacm = altura * 100;
quantidadededegraus = alturacm / degrau;

printf("A quantidade de degraus a subir para alcancar a altura desejada e: %.2f\n",quantidadededegraus);

return 0;
}