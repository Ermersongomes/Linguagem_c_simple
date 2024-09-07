#include <stdio.h>

// Função para encontrar o maior elemento de um vetor
float acharMaior(float v[], int tam)
{
    float maior;
    maior = v[0]; // Inicializa o maior com o primeiro elemento

    // Percorre o vetor para encontrar o maior elemento
    for (int i = 1; i < tam; i++) 
    {
        if (v[i] > maior) 
        { // Se o valor atual for maior, atualiza a variável
            maior = v[i];
        }
    }

    return maior; // Retorna o maior valor encontrado
}

int main() 
{
    int n;

    // Pede para o usuário informar o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n]; // Declara o vetor com o tamanho informado

    // Pede para o usuário digitar os valores do vetor
    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    // Chama a função para encontrar o maior valor
    float maiorElemento = acharMaior(vetor, n);

    // Exibe o maior valor encontrado
    printf("O maior valor do vetor é: %.2f\n", maiorElemento);

    return 0;
}
