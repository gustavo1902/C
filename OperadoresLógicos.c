#include <stdio.h>
//Operadores com valores lógicos
int main(){
  int i, j;
  printf("Informe dois npumeros(cada um sendo 0 ou 1):\n");
  scanf("%d %d", &i, &j);
  printf("%d AND %d é %d\n", i, j, i && j);
  printf("%d OR %d é %d\n", i, j, i || j);
  printf("NOT %d é %d\n", i, !i);
}
