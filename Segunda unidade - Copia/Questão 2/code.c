#include <stdio.h>

// Função para trocar os valores de A e B
void trocarValores(float *A, float *B)
{
    float temp; // Variável temporária para realizar a troca
    temp = *A; 
    *A = *B;   
    *B = temp; 
}

int main()
{
    float A, B;

    // Solicitando os valores de A e B
    printf("Digite o valor de A: \r\n");
    scanf("%f", &A);
    printf("Digite o valor de B: \r\n");
    scanf("%f", &B);

    // Mostra os valores antes da troca
    printf("\nAntes da troca: \r\n");
    printf("A = %.2f, B = %.2f\r\n", A, B);

    // Chamando a função para trocar os valores
    trocarValores(&A, &B);

    // Mostra os valores após a troca
    printf("\nDepois da troca: \r\n");
    printf("A = %.f, B = %.f\r\n", A, B);

    return 0;
}
