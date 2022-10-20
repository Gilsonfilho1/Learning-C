/*
33. Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce 3
centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão necessários
para que Zé seja maior que Chico.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c = 1.50, z = 1.10;
    int ano = 0;

    while(c>=z)
    {
        c = c + 0.02;
        z = z + 0.03;

        ano++;
    }
    printf("Vai demorar %d anos", ano);

    return 0;
}
