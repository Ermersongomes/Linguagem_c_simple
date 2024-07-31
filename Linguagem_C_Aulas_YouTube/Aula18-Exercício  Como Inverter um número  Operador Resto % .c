#include <stdio.h>

int main()
{
    int num, cifra;

    printf("Digite um numero inteiro: \n");
    scanf("%i", &num);

    if (num >= 0)
    {
        do 
        {
            cifra = num % 10;
            printf("%i", cifra);
            num /= 10;

        } while (num != 0);
        printf("\n");
        
    }
    else if (num < 1)
    {
        num = num * -1;
        printf("-");

        do 
        {
            cifra = num % 10;
            printf("%i", cifra);
            num /= 10;

        } while (num != 0);
        printf("\n");

    }



    return 0;
}