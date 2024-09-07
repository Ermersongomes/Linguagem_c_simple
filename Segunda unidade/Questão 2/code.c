#include <stdio.h>

// Função para trocar os valores de A e B
void trocarValores(float *A, float *B)
{
    float temp; // Variável temporária para realizar a troca
    temp = *A;  // Armazena o valor de A em temp
    *A = *B;    // Coloca o valor de B em A
    *B = temp;  // Coloca o valor de temp (valor original de A) em B
}

int main()
{
    float A, B;

    // Solicitando os valores de A e B
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);

    // Mostra os valores antes da troca
    printf("\nAntes da troca:\n");
    printf("A = %.2f, B = %.2f\n", A, B);

    // Chamando a função para trocar os valores
    trocarValores(&A, &B);

    // Mostra os valores após a troca
    printf("\nDepois da troca:\n");
    printf("A = %.2f, B = %.2f\n", A, B);

    return 0;
}
