#include <stdio.h>
int main()
{
    char string[100];
    printf("Digite uma string: ");
    char Ch;
    scanf("%c", &Ch);
    string[0] = Ch;
    printf("A string digitada foi: %s\n", string);
    return(0);
}
