#include <stdio.h>

int main() {
  // Defining an array
  int numbers[5]; // type name_of_array[size]

  // Assigning values
  numbers[0] = 0;
  numbers[1] = 1;
  numbers[2] = 2;

  // Define an array with the initial values.
  int numbers2[2] = { 1, 2 };

  // Using a value from an array
  printf("num: %d\n", numbers[0]); //=> num: 0
  printf("num: %d\n", numbers2[1]);
  return 1;
}
