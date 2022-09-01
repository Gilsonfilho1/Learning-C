/*
28. Faça um programa que receba três números e mostre-os em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n1, n2, n3;
  printf("Digite o primeiro numero\n");
  scanf("%d", &n1);
  printf("Digite o segundo numero\n");
  scanf("%d", &n2);
  printf("Digite o terceiro numero\n");
  scanf("%d", &n3);

  if (n3 > n1)
    if (n1 > n2)
      printf("%d %d %d\n", n2, n1, n3);
    else if (n2 < n3)
      printf("%d %d %d\n", n1, n2, n3);
  if (n1 > n2)
    if (n2 > n3)
      printf("%d %d %d\n", n3, n2, n1);
    else if (n3 < n1)
      printf("%d %d %d\n", n2, n3, n1);
  if (n1 < n2)
    if (n3 < n1)
      printf("%d %d %d\n", n3, n1, n2);
    else if (n3 < n2)
      printf("%d %d %d\n", n1, n3, n2);
  return 0;
}
