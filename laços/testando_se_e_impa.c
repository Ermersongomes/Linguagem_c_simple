#include <stdio.h>

int main(){

    int i;
    for (i=0; i<=100; i++){
        //testando se é ímpar
        if (i%2 == 0){
            printf("%i ,", i);
        }
        else{
            break;
        }
    }

    return 0; //finaliza o programa
}