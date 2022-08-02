//Leia um número real e imprima o resultado do quadrado desse número.

#include <stdio.h>
int main(void){
float num;
float quadrado ;
printf("Digite um numero inteiro:\n");
scanf("%f", &num);
quadrado = num * num;
printf("O quadrado do numero inteiro digitado eh:\n%.2f", quadrado);

return 0;
}