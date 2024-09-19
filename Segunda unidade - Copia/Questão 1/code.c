#include <stdio.h>

// Função para ler as 4 notas do aluno
void lerNotas(float notas[]) 
{
    for (int i = 0; i < 4; i++)
    {
        printf("Digite a nota %d: \r\n", i + 1);
        scanf("%f", &notas[i]);
    }
}

// Função para calcular a média das notas
float calcularMedia(float notas[])
{
    float soma = 0;
    for (int i = 0; i < 4; i++)
    {
        soma += notas[i];
    }

    return soma / 4; 
}

int main()
{
    float notas[4];  // Vetor para armazenar as 4 notas
    
    // Chama a função para ler as notas do aluno
    lerNotas(notas);
    
    float media = calcularMedia(notas);
    
    printf("A media das suas notas e: %.2f\r\n", media);

    return 0;
}
