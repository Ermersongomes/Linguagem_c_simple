#include <stdio.h>

int main()
{
    // Declarações das variáveis
    float x[4]; // cria um vetor de tamanho 4.
    // atribuindo valor ao vetor.
    x[0] = 4.14;
    x[1] = 5;
    x[2] = 8.5;
    x[3] = 10;
    // Percorrendo o vetor no laço FOR.
    int indice;
    for (indice = 0; indice < 4; indice++)
    {
        printf("%f \n", x[indice]);
    }

    return (0);
}