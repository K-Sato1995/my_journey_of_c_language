#include <stdio.h>

int main() {
  int total = 0;
  int i;

  for(i = 0; i <= 10; i++) {
    total += i;
  }

  printf("The total is %d\n", total);
}
