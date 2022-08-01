/*Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores
de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável.
Escreva o conteúdo das 2 variáveis na tela.*/
#include <stdio.h>
#include <stdlib.h>
void inverter(int *p1, int *p2){
    int aux;
    if(*p2 > *p1){
        aux = *p1;
        *p1 = *p2;
        *p2 = aux; 
    }
}



int main(){
int num1;
int num2;

int *p1;
int *p2;

p1 = &num1;
p2 = &num2;

printf("Digite um numero: ");
scanf("%d", &num1);
printf("Digite outro numero: ");
scanf("%d", &num2);

inverter(p1, p2);

printf("maior numero: %d\nmenor numero: %d", *p1, *p2);


    return 0;
}