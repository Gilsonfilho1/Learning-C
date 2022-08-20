/*Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que
esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de
imposto sobre o salário-base*/

#include <stdio.h>
int main(void){
float salario;
float salariograt;
float salarioimp;
float salariofinal;

printf("Digite o valor do salario-base do funcionario:\n");
scanf("%f", &salario);

salariograt = (salario * 5)/100;
salarioimp =  (salario * 7)/100;
salariofinal = salario + salariograt - salarioimp;

printf("O funcionario ira receber:\n%.2f", salariofinal);

return 0;
}