#include <stdio.h> // input/output
#include <stdio.h>
/**
 * imprime a sequência de Fibonacci
 * usando o laço for
**/

int main(){
    //declarações das variáveis
    float anterior1=0, anterior2=1, proximo;

    //imprimindo os elementos
    printf("%f ", anterior1);
    printf("%f ", anterior2);

    //loop de repetição
    int i, qtd_max=50;
    for(i=1; i<=qtd_max; i++){
        proximo = anterior1+anterior2;
        printf("%f ", proximo); 

        //caminhando para frente
        //atualizando os dois valores
        anterior1=anterior2;
        anterior2=proximo;
        

    }
    return 0;
    
}