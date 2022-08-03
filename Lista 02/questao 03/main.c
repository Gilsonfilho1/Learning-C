/*
3. Faça um programa que receba dois números e mostre qual deles é o maior.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, num2;
    printf("Digite o primeiro numero\n");
    scanf("%i",&num);
    printf("Digite segundo numero\n");
    scanf("%i",&num2);
    if(num > num2)
    {
        printf("\n%i e maior que %i\n", num, num2);
    }
    else
    {
        printf("\n%i e maior que %i\n", num2, num);
    }

    return 0;
}
