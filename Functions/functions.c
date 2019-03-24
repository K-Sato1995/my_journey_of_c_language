#include <stdio.h>

// プロトタイプ宣言
int dob(int number);

int main() {
  printf("2の2倍は%d\n", dob(2));
  return 0;
}

// Define a function
int dob(int number) {
  return number * 2;
}
