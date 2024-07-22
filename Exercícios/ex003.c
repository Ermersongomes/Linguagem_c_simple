#include <stdio.h>

/*Tabuada

Implemente um programa que solicite
um número inteiro e exiba a tabuada
desse número de 1 a 10.*/

int main()
{
    int num;
    int i;

    printf("Digite um numero para saber a sua tabuada: \n");
    scanf("%d", &num);

    printf("A tabuada de %d e: \n", num);

    for (i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d \n", num, i, num * i);
    }

    return 0;
}
