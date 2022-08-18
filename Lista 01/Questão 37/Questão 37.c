/*Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
recebeu um aumento de 25%.*/

#include <stdio.h>
int main(void){
float salario, aumento, porcentagem;

printf("Digite o valor do salario:\n");
scanf("%f", &salario);

porcentagem = (salario * 25)/100;
aumento = salario + porcentagem;

printf("O valor do salario com aumento de 25 porcento eh:\n%.2fR$",aumento);

return 0;
}