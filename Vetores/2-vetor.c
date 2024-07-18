#include <stdio.h>

// Este programa recebe as notas de um aluno e faz a média.

int main()
{
    // declaração das variáveis.
    int tamanho = 4; // tamanho do vetor para as notas.
    double notas[tamanho];
    double soma = 0;
    double media; 

    // Solicitando as notas ao usuário.
    int indice;
    for (indice = 0; indice < 4; indice++)
    {
        printf("Digite sua nota %i:  \n", indice + 1);
        scanf("%lf", &notas[indice]);
        soma = soma + notas[indice]; //Calculando a soma
    }

    media = soma/tamanho;

    if ( media >= 6)
    {
        printf("Aluno aprovado! \n");
        
    }
    else if (media > 4)
    {
        printf("Aluno em recuperação! \n");
    }
    else
    {
        printf("Aluno reprovado! \n");
    }

    //Informando a média do aluno.
    printf("Sua média foi: %.2lf\n", media);

    return 0;
}
