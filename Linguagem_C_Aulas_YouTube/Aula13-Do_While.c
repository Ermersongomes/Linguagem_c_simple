#include <stdio.h>

int main ()
{
    int i = 0;
    
    //No while ele verifica a condição para poder executar o comando.
    while ( i != 0 ){
    printf("teste 1 \n");
    }

    //No Do While e primeiro faz o que é pedido e depois verifica a condição.
    do
    {
        printf("Teste 2 \n");
    } while (i != 0);
    
    return 0;
}