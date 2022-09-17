#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{   
    float num1, num2, resultado;
    char op = '0';
    do{
        num1 = num2 = resultado = 0;

        printf(" (1) Soma\n");
        printf(" (2) Subtracao\n");
        printf(" (3) Multiplicacao\n");
        printf(" (4) Divisao\n");

        printf("Informe a operacao: \n");
        op = getchar();

        printf("Digite o primeiro numero\n\t ");
        scanf("%f", &num1);
        printf("Digite o segundo numero:\n\t");
        scanf("%f", &num2);

    }while(op=='0');
    
    return 0;
}