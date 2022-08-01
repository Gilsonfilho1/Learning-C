/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e
troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por
exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A.*/
#include <stdio.h>
#include <stdlib.h>
int main() {

  int *a;
  int *b;
  int temp;

  printf("Informe o valor para A:");
  scanf("%d", &a);
  printf("Informe o valor para B:");
  scanf("%d",&b);

  printf("\nA = %d\nB = %d",*a,*b);

  temp = *a;
  *a = *b;
  *b = temp;

  printf("\n A = %d\nB = %d",*a,*b);

  return 0;
}
