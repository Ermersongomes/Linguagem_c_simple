#include <stdio.h>

int main()
{

    int fatorial = 10;
    int resultado = 1;

    for ( ; fatorial >= 1 ; fatorial--)
    {
        resultado = resultado*fatorial;

    }
    
    printf("O fatorial de %i é %i \n", fatorial, resultado);


    return 0;
}
