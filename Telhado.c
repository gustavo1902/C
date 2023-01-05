#include <stdio.h>

int main(void) {
  // Declare variables
  int length, width, tile_size, num_tiles;

  // Get input from user
  printf("Digite o comprimento do telhado: ");
  scanf("%d", &length);
  printf("Digite a largura do telhado: ");
  scanf("%d", &width);
  printf("Digite o tamanho das telhas: ");
  scanf("%d", &tile_size);

 // Calcula o número de telhas necessárias
  num_tiles = (length * width) / tile_size;

  // Imprime o resultado
  printf("O número de telhas necessárias é: %d\n", num_tiles);

  return 0;
}
