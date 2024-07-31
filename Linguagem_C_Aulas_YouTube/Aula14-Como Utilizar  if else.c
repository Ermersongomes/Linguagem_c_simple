#include <stdio.h>

int main()
{
    int idade;

    printf("Informe sua idade: \n");
    scanf("%i", &idade);

    if ( idade < 18){
        printf("Bebidas alcoólicas não são permitidas. \n");
    }else {
            printf("Bebidas alcoólicas são permitidas. \n");
    }


    return 0;
}