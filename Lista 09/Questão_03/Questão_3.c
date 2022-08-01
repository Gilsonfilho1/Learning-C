/*Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em
seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/
#include <stdio.h>

 

int main () {

 

   int x, y;  

   printf("x: ");

   scanf("%d", &x);

   printf("y: ");

   scanf("%d", &y);

   printf("\n");

   if (&x > &y) {

       printf("%d", x);

   } else {

       printf("%d", y);

   }

}
