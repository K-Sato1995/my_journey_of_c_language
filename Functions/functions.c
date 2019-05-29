#include <stdio.h>

// プロトタイプ宣言
int dob(int number);
char l(char n);

int main() {
  printf("2の2倍は%d\n", dob(2));
  printf("Print %c\n", l('a'));
  return 0;
}

// Define a function
int dob(int number) {
  return number * 2;
}

//
char l(char n) {
  return n;
}
