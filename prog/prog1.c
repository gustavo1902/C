#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{   
    printf("Digite o numero 1:\n");
    char c;
    c = getchar();
    if (c == '1')
    {
        printf("\nO caracter digitado esta correto\n");
    }else{
        printf("\nO caracter digitado esta incorreto\n");
        printf("Voce digitou o caracter >%c<\n", c);
    }

    return 0;
}
