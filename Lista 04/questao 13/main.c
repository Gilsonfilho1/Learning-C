/*
13. Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os
escreva na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

 int num[10], i = 0, x = 0, aux;

 printf("Digite 10 numeros:\n");

 for(i = 0; i < 10; i++){

   printf("[%i]", i+1);

   scanf("%d", &num[i]);

 }

 printf("\n\nNumeros repetidos:\n");

 for(i = 0; i < 10; i++){
   for(x = i+1; x < 10; x++){
     if(num[x] == num[i]){
       aux = num[i];
       printf("%d\n", aux);
     }
   }
 }
return 0;

}
