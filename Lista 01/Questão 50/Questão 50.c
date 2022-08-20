/*Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o
preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.*/

#include <stdio.h>
int main(void){

 float largura, comprimento, preco, arame;

     printf("Digite o comprimento\n");
     scanf("%f",&comprimento);

     printf("Digite a largura\n");
     scanf("%f",&largura);

     printf("Digite o preco do metro do arame:\n");
     scanf("%f",&arame);

     preco=comprimento*largura*arame;

     printf("O custo das cercas ficara e R$%.2f ",preco);

return 0;
}