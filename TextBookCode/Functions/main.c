#include<stdio.h>

int sum(int a, int b);

int main(void) {
  int x=3, y=5, z;

  printf("Before function: x:%d, y: %d\n", x, y);
  z = sum(x, y);
  printf("After function: x:%d, y: %d, z:%d\n", x, y, z);
}

// 値渡し(Call by vallue)
int sum(int a, int b) {
  printf("In function: a:%d, b: %d\n", a, b);
  a += b;
  // 関数内ではaの値は変化するが、x自体に影響を与えない。
  printf("In function: a:%d, b: %d\n", a, b);
  return a + b;
}
/*
Before function: x:3, y: 5
In function: a:3, b: 5
In function: a:8, b: 5
After function: x:3, y: 5, z:13
*/
