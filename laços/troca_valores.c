#include <stdio.h>
//trocando os valores de 2 variaveis
// a primeira recebe o valor da segunda
// e a segunda recebe o valor da primeira.

int main(){ 
    //declarações de variáveis
    int a=3, b=5, tmp=0;
    
    printf("a: %i \n", a);
    printf("n: %i \n", b);
    //trocando valores
    //swap
    tmp=a;
    a=b;
    b=tmp;
    printf("a: %i \n", a);
    printf("n: %i \n", b);

    return 0; // sai da função main
}
