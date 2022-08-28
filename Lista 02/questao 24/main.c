/*
24. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for divisível
por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992, 1996
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
int ano;
int resultado(int ano);

printf("Digite um ano: ");
scanf("%i",&ano);

if (resultado(ano) == 1)
printf("%i, e um ano bissexto.",ano);
else
printf("%i, nao e um ano bissexto.",ano);



return 0;
}
int resultado(int x){
if(x%400==0 || x%4==0 && x%100!=0)
return 1;
else
return 0;
}
