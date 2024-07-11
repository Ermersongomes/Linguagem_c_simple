#include <stdio.h>

//este programa calcula a sequencia de fibonacci usando o laço while()

int main(){
    int primeiro = 0;
    int segundo = 1;
    int proximo;
    printf("%i, ", primeiro);
    printf("%i, ", segundo);
    //loop de repetição while
    int i=1;
    while (i<=1000){
        proximo = primeiro + segundo;
        printf("%i, ", proximo);
        primeiro = segundo;
        segundo = proximo;
        i++;
    }
    
}