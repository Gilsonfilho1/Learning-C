//21. Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores.

#include <stdio.h>
#include <stdlib.h>


int main()
{
   int num,i;

   printf("Digite um numero: ");

   scanf("%d",&num);

   printf("Seus divisores s�o:");
   i = 1;

   while (i<=num)
    {
        if (num%i==0)

        printf(" %d ", i);
        i++;
    }
   return 0;

}
