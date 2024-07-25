#include <stdio.h>
// função que retorna  a média de 4 números decimais
float calcular_media(float n1, float n2, float n3, float n4)
{
    float media = (n1 + n2 + n3 + n4) / 4;
    return media;
}

// início do programa
int main()
{
    // declarações das variáveis
    float media;
    float n1, n2, n3, n4;

    n1 = 3;
    n2 = 5;
    n3 = 8;
    n4 = 16;

    // executando o programa
    media = calcular_media(n1, n2, n3, n4);
    printf("media: %2.f \n", media);

    return 0;
}
