#include <stdio.h>

// Função para encontrar o maior elemento do vetor
float encontrarMaior(float vetor[], int tamanho)
{
    float maior = vetor[0]; 

    for (int i = 1; i < tamanho; i++)
    {
        
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }


    return maior; 
}

int main()
{
    int tamanho;


    printf("Digite quantos numeros tera o vetor: \r\n");
    scanf("%d", &tamanho);

    float vetor[tamanho];  // Declara o vetor com o tamanho escolhido

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o numero %d: \r\n", i + 1);
        scanf("%f", &vetor[i]);
    }

    // Chama a função para encontrar o maior número
    float maior = encontrarMaior(vetor, tamanho);

    
    printf("O maior numero e: %.0f\r\n", maior);


    return 0;
}
