#include <stdio.h>

/* Soma dos Números de 1 a N

Escreva um programa que leia um número inteiro positivo N e calcule
a soma dos números de 1 até N usando um laço for.*/

int main()
{

    int n, soma = 0, i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for ( i = 1; i <= n ; i++)
    {
        soma = soma + i;
    }
    
    printf("A soma de 1 a %d e %d \n", n, soma);


    return 0;
}
