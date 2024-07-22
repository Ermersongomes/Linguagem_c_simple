#include <stdio.h>

/**
Fatorial com Laço while

Implemente um programa que calcule o fatorial de um
número inteiro positivo usando um laço while.
*/

int main()
{
    int num;
    int fatorial = 1;
    int i = 1;

    printf("Digite um numero positivo: \n");
    scanf("%d", &num);

    while (i <= num)
    {
        fatorial = fatorial * i;
        i++;
    }

    printf("O fatorial de %d e %d. \n", num, fatorial);

    return 0;
}
