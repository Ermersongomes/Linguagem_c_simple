#include <stdio.h>
/*Verificação de Paridade
Crie um programa que receba um número
inteiro e determine se ele é par ou ímpar.*/

int main()
{
    int num;

    printf("Digite um numero para saber se e PAR \n");
    scanf("%i", &num);

    if (num % 2 == 0)
    {
        printf("O numero que voce digitou e PAR! \n");
    }
    else
    {
        printf("O numero que voce digitou e IMPAR! \n");
    }
    
    return 0;
}
