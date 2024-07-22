#include <stdio.h>

int main() {
    int N;
    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &N);

    int a = 0, b = 1, c;
    printf("Sequência de Fibonacci: ");
    for (int i = 1; i <= N; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
