#include <stdio.h>

int main (void) {
  char name[] = "John";

  // First [] is the length of the array. The second [] is the length of each string in the array.
  char team[][10] = { "Joel", "Jack" };

  printf("%s\n", name);
  printf("%s\n", team[0]);
  printf("%s\n", team[1]);

  char form[] = "%s is my name\n";
  printf(form, name);
}
