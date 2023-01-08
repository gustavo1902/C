#include <stdio.h>

int main(void) {
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);

  if (num == 1) {
    printf("Vai chover hoje.\n");
  } else {
    printf("Não vai chover hoje.\n");
  }

  return 0;
}
