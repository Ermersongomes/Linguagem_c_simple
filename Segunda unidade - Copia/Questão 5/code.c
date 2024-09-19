#include <stdio.h>

// Função para calcular o IMC.
float calcularIMC(float peso, float altura)
{
    return peso / (altura * altura);
}

int main()
{
    float peso, altura;


    printf("digite seu peso em kg: \r\n");
    scanf("%f", &peso);
    printf("digite sua altura em metros, EX: 1.78: \r\n");
    scanf("%f", &altura);

    // Calcula o IMC usando a função calcularIMC.
    float imc = calcularIMC(peso, altura);

    printf("seu IMC e: %.2f\n", imc);
    
    
    if(imc < 17) {
        printf("situacao de saude: muito abaixo do peso\r\n");
    } else if(imc >= 17 && imc <= 18.49) {
        printf("situacao de saude: abaixo do peso\r\n");
    } else if(imc >= 18.5 && imc <= 24.99) {
        printf("situacao de saude: peso normal\r\n");
    } else if(imc >= 25 && imc <= 29.99) {
        printf("situacao de saude: acima do peso\r\n");
    } else if(imc >= 30 && imc <= 34.99) {
        printf("situacao de saude: obesidade I\r\n");
    } else if(imc >= 35 && imc <= 39.99) {
        printf("situacao de saude: obesidade II \r\n");
    } else {
        printf("situacao de saude: obesidade III \r\n");
    }


    return 0;
}
