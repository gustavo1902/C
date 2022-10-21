#include <stdio.h>
int square(int x)
{
    printf("O quadrado e %d",(x*x));
    return(0);
}

int main()
{
    int num;
    printf("Entre com um numero: ");
    scanf("%d",&num);
    printf("\n\n");
    square(num);
    printf("\n\n");
    return(0);
}
