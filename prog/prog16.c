#include <stdio.h>
int main(){
int *ptr, *ptr1;
int numero;
numero = 20;
ptr = &numero;
ptr1 = ptr; // ambos estão apontado para o endereço de número.
printf("\nptr = %d",*ptr);
printf("\nptr1 = %d",*ptr1);
}
