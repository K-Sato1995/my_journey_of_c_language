#include <stdio.h>

int main() {
  int num1 = 1;
  int num2 = 2;

  if (num2 > num1) {
    printf("num2 is bigger");
  }else if (num1 == num2) {
    printf("They are the same");
  }else {
    printf("num1 is bigger");
  };
  return 0;
}
