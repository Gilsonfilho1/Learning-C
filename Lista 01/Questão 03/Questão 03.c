//Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>
int main(void){
int num1,num2, num3, soma;
printf("Digite o primeiro numero inteiro:\n");
scanf("%d", &num1);
printf("Digite o segundo numero inteiro:\n");
scanf("%d", &num2);
printf("Digite o terceiro numero inteiro:\n");
scanf("%d", &num3);

soma = num1 + num2 + num3; 

printf("O valor da soma dos tres numeros inteiros inseridos eh:\n%d",soma);
return 0;
}