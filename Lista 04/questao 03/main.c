/*
3. Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10
elementos cada. Imprimir todos os conjuntos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int i = 1, numeros[10], quadrados[10] ;

printf("Digite os numeros\n");

while(i<=10){

scanf("%d", &numeros[i]);
i++;
}

i = 1;

while(i<=10)
{
quadrados[i] = numeros[i]*numeros[i];

printf("Resultado do %d numero: %d\n", i, quadrados[i]);

i++;
}

return 0;
}
