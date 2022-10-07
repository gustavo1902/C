#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

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
        printf(" (0) Sair do programa\n");

        printf("Informe a operacao: \n");
        printf("\t\t\t>>>");
        op = getche();
        printf("\n");

        if(op!='0'){
        printf("Digite o primeiro numero\n\t ");
        scanf("%f", &num1);
        printf("Digite o segundo numero:\n\t");
        scanf("%f", &num2);

        if(op=='1'){
            resultado = num1 + num2;
        }else if(op=='2'){
            resultado = num1 - num2;
        }else if(op=='3'){
            resultado = num1 * num2;
        }else if(op=='4'){
            resultado = num1 / num2;
        }

        printf("\nO resultado e: \t\t>>> %f\n", resultado);
           system("pause");
           system("cls");
    }while(op != '0');
    
    return 0;
}