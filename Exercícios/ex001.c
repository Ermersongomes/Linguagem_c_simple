#include <stdio.h>

/* Cálculo da Média; Escreva um programa que leia cinco números
inteiros e calcule a média deles. Imprima o resultado.*/

int main()
{

    int num;
    int soma = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o número: \n");
        scanf("%d", &num);

        soma = soma + num;
    }

    float media = soma / 5;

    printf("A média é: %.2f\n", media);

    return 0;
}
