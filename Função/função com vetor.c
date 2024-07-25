#include <stdio.h>
//função que retorna  a média de 4 números decimais
float calcular_media(float n1, float n2, float n3, float n4)
{
    return (n1+n2+n3+n4)/4;
}


//início do programa
int main()
{
    //declarações das variáveis
    float media;

    //executando o programa
    media = calcular_media(4, 1, 3, 0);
    

    return 0;
}
