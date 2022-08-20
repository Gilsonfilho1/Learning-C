/*Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII
para resolver o problema.*/

#include <stdio.h>
int main(void){
char carc;

printf("Digite uma letra.\n");
scanf("%c", &carc);
int maiusculo = 'A';
int minusculo = 'a';

int diff = minusculo - maiusculo;
printf("%c", carc + diff);

return 0;
}