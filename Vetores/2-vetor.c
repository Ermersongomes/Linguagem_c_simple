#include <stdio.h>

// Este programa recebe as notas de um aluno e faz a média.

int main()
{
    // declaração das variáveis.
    int tamanho = 4; // tamanho do vetor para as notas.
    double notas[tamanho];

    // Solicitando as notas ao usuário.
    int indice;
    for (indice = 0; indice < 4; indice++)
    {
        printf("Digite sua nota: %i \n", indice + 1);
        scanf("%f", &notas[indice]);
    }

    return 0;
}
