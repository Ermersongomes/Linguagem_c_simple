#include <stdio.h>

/*Contagem de Dígitos

Escreva um programa que leia um número
inteiro e conte quantos dígitos ele possui.*/

int main()
{
    int num;
    int cont = 0;

    printf("Digite o numero: \n");
    scanf("%d", &num);

    while (num != 0)
    {
        num /= 10;

        cont++;
    }

    printf("O numero de digitos e: %d \n", cont);

    return 0;
}
