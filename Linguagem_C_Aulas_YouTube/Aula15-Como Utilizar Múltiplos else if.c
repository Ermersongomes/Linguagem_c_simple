#include <stdio.h>

int main()
{
    int idade;

    printf("Informe a idade: \n");
    scanf("%i", &idade);

    if (idade < 5)
    {
        printf("Bebe \n");
    }
    else if (idade >= 5 && idade <= 10)
    {
        printf("Crianca \n");
    }
    else if (idade > 10 && idade <= 17)
    {
        printf("Adolescente \n");
    }
    else if (idade >= 18 && idade <= 49)
    {
        printf("Adulto \n");
    }
    else
    {
        printf("idoso \n");
    }

    return 0;
}