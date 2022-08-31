/*
27. Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros
menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é
a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao
aluno, e mostre para ele as perguntas e as respostas corretas, além de quantas vezes o aluno
acertou.

*/

#include <stdio.h>
#include <stdlib.h>

int i,acertos=0;
int a,b,soma,resultado;

int main()
{
for(i=0;i<5;i++){
 a = (rand() % 100) + 1;
 b = (rand() % 100) + 1;
 soma = a+b;
 resultado = soma;
 printf("Qual a soma de %i + %i?\n",a,b);
 scanf("%i",&resultado);
 if (resultado != soma)
  printf("Respota errado, a resposta correta e: %i\n",soma);
 else
 acertos ++;
}
printf("voce acertou em:%d\n",acertos);
return 0;
}
