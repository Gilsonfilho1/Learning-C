/*
Escreva um programa que declare um inteiro, um real e um char,
 e ponteiros para inteiro, real, e
char. Associe as variáveis aos ponteiros (use &).
 Modifique os valores de cada variável usando os
ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
int x = 10;
float y = 0.10;
char z = 'a';

int *X = &x;
float *Y = &y;
char *Z = &z;

*X = 20;
y = 0.20;
*Z = 'b';

printf("\nInteiro %d", *X);
printf("\nReal %f", *Y);
printf("\nChar %c", *Z);


    return 0;
}
