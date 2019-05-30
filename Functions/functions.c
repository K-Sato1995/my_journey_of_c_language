#include <stdio.h>

// プロトタイプ宣言
int dob(int number);
char l(char n);
int sum(int num1, int num2);

int main() {
  printf("2の2倍は%d\n", dob(2));
  printf("Print %c\n", l('a'));

  int x=3, y=5;
  printf("Before Functioin x=%d, y=%d\n", x, y);
  sum(x, y);
  printf("After Functioin x=%d, y=%d\n", x, y); // 値渡しなので関数内での変更はその外には影響を与えない。
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

// Sum
int sum(int num1, int num2) {
  num1 += num2;
  printf("In Functioin x=%d, y=%d\n", num1, num2);
  return num1;
}
