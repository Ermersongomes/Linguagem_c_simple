#include <stdio.h>

int main()
{
    int x = 3;
    int *p; // ponteiro para um inteiro

    printf("End. memoria x: %p \n", &x); //&x end. memoria de x
    printf("End. memoria p: %p \n", &p);

    //p aponta para x
    p = &x; //conteúdo de p é end.memoria de x
    printf("Valor de p: %p \n", &p);

    return 0;
}
