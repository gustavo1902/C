#include <stdio.h>
int main(){
int *ptr, *ptr1;
int numero, total;
numero = 20;
total = 10;
ptr = &numero;
ptr1 = &total;
*ptr1 = *ptr; // as variáveis numero e total contém o mesmo valor de número.
printf("\nNumero = %d",numero);
printf("\nTotal = %d",total);
}
