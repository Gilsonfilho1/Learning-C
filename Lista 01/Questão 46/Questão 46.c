/*Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/

#include <stdio.h>
int main(void){

 int seg, hora, min, segu, resul;

    printf("Digite os segundos para ser transformado em Horas\n");
    scanf("%d", &seg);

    hora = seg / 3600;
    resul = seg % 3600;
    min = resul / 60;
    segu = resul % 60;
    printf("%d:%d:%d\n", hora, min, segu);

return 0;
}