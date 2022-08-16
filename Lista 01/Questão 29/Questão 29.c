/*Leia quatro notas, calcule a média aritmética e imprima o resultado*/

#include <stdio.h>
int main(void){
float nota1, nota2, nota3, nota4;
float soma;
float media;

printf("Digite a primeira nota:\n");
scanf("%f",&nota1);
printf("Digite a segunda nota:\n");
scanf("%f",&nota2);
printf("Digite a terceira nota:\n");
scanf("%f",&nota3);
printf("Digite a quarta nota:\n");
scanf("%f",&nota4);

soma = nota1 + nota2 + nota3 + nota4;
media = soma / 4;

printf("O valor da media aritmetica eh:\n%.2f", media);

return 0;
}