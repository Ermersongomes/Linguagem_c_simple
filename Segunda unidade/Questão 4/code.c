#include <stdio.h>

// Função para inverter o vetor
void inverterVetor(float v[], int tam) {
    int i, j;
    float temp;

    // Laço para trocar os elementos
    for (i = 0, j = tam - 1; i < j; i++, j--) 
    {
        temp = v[i];   // Armazena o valor do início do vetor
        v[i] = v[j];   // Troca o valor do final do vetor com o início
        v[j] = temp;   // Coloca o valor do início no final
    }
}

int main() 
{
    int n;

    // Solicita o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n]; // Declara o vetor

    // Solicita os elementos do vetor
    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    // Chama a função para inverter o vetor
    inverterVetor(vetor, n);

    // Exibe o vetor invertido
    printf("Vetor invertido: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
