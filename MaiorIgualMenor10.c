#include <stdio.h>
int main()
{
    int num;
    printf("Maior,igual ou menor que 10? \n");
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num>10)printf("\nO numero e maior que 10\n");
    if(num<10)printf("\nO numero e menor que 10\n");
    if(num==10)printf("\nO numero e igual a 10\n");
    return 0;
}
