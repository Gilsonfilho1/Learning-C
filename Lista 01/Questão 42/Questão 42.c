/*Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
a. o total a pagar com desconto de 10%;
b. o valor de cada parcela, no parcelamento de 3x sem juros;
c. a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
d. a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)*/

#include <stdio.h>
int main(void){
float total;
float totaldesconto;
float valorparcela;
float comissao;
float comissaoparcelada;

printf("Digite o valor total do produto:\n");
scanf("%f", &total);

totaldesconto = (total - (total * 10)/100);
valorparcela = total/3;
comissao = ((totaldesconto * 5)/100);
comissaoparcelada = ((total * 5)/100);

printf("a. O valor a se pagar com 10 porcento de desconto eh:\n%.2fR$", totaldesconto);
printf("\nb. O valor de cada parcela em 3x eh:\n%.2fR$", valorparcela);
printf("\nc. O valor da comissão do vendedor no caso da venda ser a vista eh:\n%.2fR$", comissao);
printf("\nd. O valor da comissão do vendedor no caso da venda ser a parcelada eh:\n%.2fR$", comissaoparcelada);

return 0;
}