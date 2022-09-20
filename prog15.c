#include<stdio.h>
int main(){
  int numero;
  int *p;

  numero = 100;

  p = &numero; //Move o endereço da variável numero para p

  printf("\nConteúdo de numero = %d", *p); //imprime o conteúdo da variável numero

  *p = *p  * 10; //multiplica o conteúdo da variável numero por 10

   printf("\nConteúdo de numero = %d", numero);
}
