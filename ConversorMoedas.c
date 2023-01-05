#include <stdio.h>

int main(void) {
  // Declare as variáveis
  float value, conversion_rate, converted_value;
  char destination_currency[3];

  // Obtenha a entrada do usuário
  printf("Insira o valor a ser convertido: ");
  scanf("%f", &value);
  printf("Insira a taxa de câmbio: ");
  scanf("%f", &conversion_rate);
  printf("Insira a moeda de destino: ");
  scanf("%s", destination_currency);

  // Converte o valor
  converted_value = value * conversion_rate;

  // Imprime o resultado
  printf("%.2f %s\n", converted_value, destination_currency);

  return 0;
}
