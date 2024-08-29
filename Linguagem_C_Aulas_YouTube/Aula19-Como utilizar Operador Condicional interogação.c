#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;

    int resposta;

    num1 < num2 ? printf("Sim\n") : printf("Nao\n");

    resposta = (num1 < num2) ? 10 : -10;

    printf("%i\n", resposta);

    return 0;
}
