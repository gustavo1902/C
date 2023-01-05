#include <stdio.h>

int main(void) {
  // Declare variables
  float sq_meters, cu_meters;
  float height;

  // Get input from user
  printf("Enter the value in square meters: ");
  scanf("%f", &sq_meters);
  printf("Enter the height in meters: ");
  scanf("%f", &height);

  // Convert the value
  cu_meters = sq_meters * height;

  // Print the result
  printf("%.2f cubic meters\n", cu_meters);

  return 0;
}
