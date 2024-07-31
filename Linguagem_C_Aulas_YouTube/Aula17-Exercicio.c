#include <stdio.h>

/*Faça um programa que que receba dois números inteiros e calcule se o primeiro número é divisível pelo segundo de modo que resulte em uma divisão inteira. Imprima uma mensagem adequada para o resultado.*/

int main()
{
    int num1, num2;

    printf("Digite dois numeros inteiros: \n ");
    scanf("%i %i", &num1, &num2);

    if (num2 == 0)
    {
        printf("A divisao nao e possivel \n");
    }
    else
    {
        if (num1 % num2 == 0)
        {
            printf("O numero %i e divisivel por %i \n", num1, num2);
        }
        else
        {
            printf("A divisao de %i por %i nao e uma divisao exata. \n", num1, num2);
        }
    }
    return 0;
}