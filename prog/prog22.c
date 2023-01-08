#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  FILE *file;
  int num_names;
  char name[100];

  // Abre o arquivo de nomes
  file = fopen("names.txt", "r");
  if (file == NULL) {
    printf("Erro ao abrir o arquivo de nomes.\n");
    return 1;
  }

  // Conta o número de nomes no arquivo
  num_names = 0;
  while (fgets(name, 100, file) != NULL) {
    num_names++;
  }

  // Volta para o início do arquivo
  rewind(file);

  // Gera um número aleatório entre 0 e num_names - 1
  srand(time(NULL));
  int r = rand() % num_names;

  // Lê o nome na posição aleatória
  for (int i = 0; i <= r; i++) {
    fgets(name, 100, file);
  }

  // Remove o caractere de nova linha do final do nome
 
