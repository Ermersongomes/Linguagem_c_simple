#include <stdio.h>

/*
1) Escreva um programa em C, que solicita as 4 notas do aluno, utilizando uma função para
isso, salvando essas notas em um vetor de tamanho 4. Em seguida o programa deve
passar esse vetor para uma segunda função, criada por você, que retorna a média das
notas. 
*/

// Função para as notas.
void lerNotas(float notas[], int tamanho) 
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

// Função para calcular a média.
float calcularMedia(float notas[], int tamanho)
{
    float soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += notas[i];
    }

    return soma / tamanho;
}

int main()
{
    float notas[4];
    
    // Chamando a função para ler as notas
    lerNotas(notas, 4);
    
    // Calculando e exibindo a média
    float media = calcularMedia(notas, 4);
    printf("A media de suas notas e: %.2f\n", media);

    return 0;
}
