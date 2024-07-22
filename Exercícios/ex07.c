#include <stdio.h>

/* Produto dos Números de 1 a N

Crie um programa que leia um número inteiro positivo N e calcule o produto
dos números de 1 até N usando um laço for.*/

int main()
{

    int n;
    int produto = 1;
    int i;

    printf("Digite um numero positivo: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        produto = produto * i;
    }

    printf("O produto de 1 a %d e %d \n", n, produto);

    return 0;
}
