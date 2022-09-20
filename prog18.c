#include<stdio.h>
int main() {
 char *ptr;
 int i;
 char vet[5] = {'a', 'b', 'c', 'd', 'e'};
 
 ptr = vet;  // A variavel ponteiro ptr aponta para o primeiro elemento do vetor
 for (i=0; i < 5; i++){
  printf("\nVet[%d] = %c    ptr = %c", i, vet[i], *ptr); // o conteudo do vetor acessado pela variavel e pelo ponteiro
  ptr++; 
 } 
}
