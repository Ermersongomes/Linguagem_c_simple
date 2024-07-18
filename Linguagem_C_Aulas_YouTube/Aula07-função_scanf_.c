#include <stdio.h>

int main()
{
    int base;
    int altura;
    int area;

    printf("Vamos calcular a area de retangulo:\n");

    printf("Digite a base: ");
    scanf("%i", &base);

    printf("Digite a altura: ");
    scanf("%i", &altura);

    area = (base * altura);

    printf("A area do rentagulo e: %i\n", area);

    return 0;
}
