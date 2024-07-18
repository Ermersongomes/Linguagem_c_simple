#include <stdio.h>

int main()
{
    /* Operadores aritméticos em C:
     soma = a + b; Operador de adição (+)
     subtracao = a - b; Operador de subtração (-)
     multiplicacao = a * b; Operador de multiplicação (*)
     divisao = a / b; Operador de divisão (/)
     resto = a % b; Operador de resto (%)
    */
    int minhaIdade = 23;
    int maeIdade = 47;
    int irmaoIdade = 13;
    int cachorroIdade = 12;

    int idadeTotal;

    idadeTotal = minhaIdade + maeIdade + irmaoIdade + cachorroIdade;
    printf("O total de idades e %i.\n", idadeTotal);

    return 0;
}
