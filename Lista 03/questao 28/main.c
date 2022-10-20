/*
28. Fa�a um programa que some os n�meros �mpares contidos em um intervalo definido pelo usu�rio.
O usu�rio define o valor inicial do intervalo e o valor final deste intervalo e o programa deve
somar todos os n�meros �mpares contidos neste intervalo.
Caso o usu�rio digite um intervalo inv�lido (come�ando por um valor maior que o valor final)
deve ser escrito uma mensagem de erro na tela,
�Intervalo de valores inv�lido� e o programa termina. Exemplo de tela de sa�da:
1 Digite o valor inicial e valor final: 5 10
2 Soma dos �mpares neste intervalo: 21
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0, num2 = 0, soma = 0;

    printf("Digite o primeiro e o segundo valor\n");
    scanf("%d %d", &num1, &num2);

    if(num1<=num2 && num1>0)
    {
      while(num1<=num2)
      {
        if (num1%2!=0)
        {
            soma = soma + num1;
            num1 = num1 + 2;
        }
        else
        {
            num1++;
        }
      }
      printf("A soma do intervalo de impares e: %d", soma);
    }
    else
    {
      printf("Valores invalidos");
    }
    return 0;
}
