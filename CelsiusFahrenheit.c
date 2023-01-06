#include <stdio.h>

int main(void) {
  // Declare variables
  float temperature, converted_temperature;
  char unit;

  // Get input from user
  printf("Enter the temperature to be converted: ");
  scanf("%f", &temperature);
  printf("Enter the unit of the temperature (C or F): ");
  scanf(" %c", &unit);

  // Convert the temperature
  if (unit == 'C') {
    converted_temperature = temperature * 9/5 + 32;
  } else {
    converted_temperature = (temperature - 32) * 5/9;
  }

  // Print the result
  printf("%.2f %c\n", converted_temperature, (unit == 'C') ? 'F' : 'C');

  return 0;
}
