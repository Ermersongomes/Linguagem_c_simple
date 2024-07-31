#include <stdio.h>

float m = 0;
float pi = 3.14;
float media = 0;

//retorna a média entre 3 números
float calcula_media(float n1, float n2, float n3)
{
    m = (n1+n2+n3)/3;
    return m;
}

//inicio
int main()
{
    //declaração das variáveis7
    float n1 = 3, n2 = 5.5, n3 = 2.5;
    
    //imprimindo a variável global
    printf("media: %f -# %p \n", media, &media);

    //executando a função
    float media = calcula_media(n1, n2, n3);
    printf("media: %f -# %p \n", media, &media);
    
    //acessando o valor da variável global
    printf("m: %f \n", m);
    return 0;
}
