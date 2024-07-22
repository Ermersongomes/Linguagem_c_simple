#include <stdio.h>

/*Soma de Elementos de um Array

Crie um programa que declare um array
de 10 inteiros, leia valores para o array
e calcule a soma dos elementos.*/

int main()
{
    int num[10];
    int sum = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero: \n");
        scanf("%d", &num[i]);

        sum = sum + num[i];
    }

    printf("A soma dos elementos e: %d \n", sum);

    return 0;
}
