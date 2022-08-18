/*A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que
da quantia total:
a. O primeiro ganhador receberá 46%;
b. O segundo receberá 32%;
c. O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/

#include <stdio.h>
int main(void){
float total;
float porcentagem01, porcentagem02;
float resto;

total = 780000.00;
porcentagem01 = (total * 46)/100;
porcentagem02 = (total * 32)/100;
resto = total - porcentagem01 - porcentagem02;

printf("a. O primeiro ira ganhar:\n%.2f", porcentagem01);
printf("\nb. O segundo ira ganhar:\n%.2f", porcentagem02);
printf("\nc. O terceiro ira ganhar:\n%.2f", resto);

return 0;
}