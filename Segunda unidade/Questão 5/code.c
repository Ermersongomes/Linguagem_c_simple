#include <stdio.h>

// Função para calcular o IMC.
float calcularIMC(float peso, float altura)
{
    return peso / (altura * altura);
}

// Função principal.
int main()
{
    float peso, altura;

    // Solicita ao usuário o peso e a altura.
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura em metros, EX: 1.78: ");
    scanf("%f", &altura);

    // Calcula o IMC usando a função calcularIMC.
    float imc = calcularIMC(peso, altura);

    // Exibe o resultado com base na tabela de IMC.
    printf("Seu IMC é: %.2f\n", imc);
    
    // Verifica a situação de saúde com base no IMC.
    if(imc < 17) {
        printf("Situacao de saude: Muito abaixo do peso\n");
    } else if(imc >= 17 && imc <= 18.49) {
        printf("Situacao de saude: Abaixo do peso\n");
    } else if(imc >= 18.5 && imc <= 24.99) {
        printf("Situacao de saude: Peso normal\n");
    } else if(imc >= 25 && imc <= 29.99) {
        printf("Situacao de saude: Acima do peso\n");
    } else if(imc >= 30 && imc <= 34.99) {
        printf("Situacao de saude: Obesidade I\n");
    } else if(imc >= 35 && imc <= 39.99) {
        printf("Situacao de saude: Obesidade II (severa)\n");
    } else {
        printf("Situacao de saude: Obesidade III (morbida)\n");
    }

    return 0;
}
