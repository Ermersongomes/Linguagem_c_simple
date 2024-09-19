#include <stdio.h>

// Função para inverter o vetor
void inverterVetor(int vetor[], int tamanho)
{
    int temp;  
    int i = 0;  
    int j = tamanho - 1;  // Índice final


    while (i < j)
    {
        temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;

        // Move o índice i para frente e o índice j para trás
        i++;
        j--;
    }
}

int main()
{
    int tamanho;

    // tamanho do vetor
    printf("quantos elementos ira ter o vetor? \r\n");
    scanf("%d", &tamanho);

    int vetor[tamanho];  

    for (int i = 0; i < tamanho; i++)
    {
        printf("digite o elemento %d: \r\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Chama a função para inverter o vetor
    inverterVetor(vetor, tamanho);

    
    printf("vetor invertido: \r\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\r\n");




    return 0;
}
