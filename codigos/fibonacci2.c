#include <stdio.h> // entrada/saida

//Este programa calcula a sequência de fibonacci usando o laço FOR

int main(){
    int primeiro, segundo, proximo;

    //Atribuição dos valores iniciais
    primeiro = 0;
    segundo = 1;
    
    //escrvendo
    printf("Sequência de Fibonacci:\n");
    printf("%i, ", primeiro);
    printf("%i, ", segundo);

    //loop de repetição
    int i;
    for(i=1; i<=10000; i++){
        proximo = primeiro + segundo;
        printf("%i, ", proximo);
        //atualizando os valores / caminhando para frente
        primeiro = segundo;
        segundo = proximo;

    }

}

