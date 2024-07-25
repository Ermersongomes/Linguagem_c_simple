#include <stdio.h>

float f_to_celsius(float f)
{
    return (f - 32) / 1.8;
}

int main()
{

    float c;
    float f;

    printf("Digite a temperatura em Fahrenheit: \n");
    scanf("%f", &f);

    c = f_to_celsius(f);

    printf(" A temperatura em Graus Celsius e: %.1f ", c);

    return 0;
}
