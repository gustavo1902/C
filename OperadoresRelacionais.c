#include <stdio.h>
//Os operadores relacionais são usados para comparar dois valores e retornar um valor booleano (verdadeiro(1) ou falso(0)).
int main()
{
  int i, j;
  printf("\nEntre com dois numeros inteiros:\n");
  scanf("%d %d", &i, &j);
  printf("\n%d == %d é %d", i, j, i == j);
  printf("\n%d != %d é %d", i, j, i != j);
  printf("\n%d > %d é %d", i, j, i > j);
  printf("\n%d < %d é %d", i, j, i < j);
  printf("\n%d >= %d é %d", i, j, i >= j);
  printf("\n%d <= %d é %d\n", i, j, i <= j);
  return 0;
}
