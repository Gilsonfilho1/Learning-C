/*Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e
do ano atual*/

#include <stdio.h>
int main(void){

int anoatual, anonasci, resultado;
    printf("Em qual ano estamos?\n");
    scanf("%i", &anoatual);

    printf("Em qual ano voce nasceu?\n");
    scanf("%i", &anonasci);

    resultado = anoatual - anonasci;

    printf("Voce tem ou vai fazer %i anos de idade!\n", resultado);

return 0;
}