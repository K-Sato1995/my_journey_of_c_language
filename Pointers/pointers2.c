#include <stdio.h>

int main(void) {
  int x;
  int *px;
  x = 10;

  // アドレスを表示する。
  px = &x;

  printf("%p\nn", px);
  //=> 0x7fff5a9b7758

  // 配列のアドレスを表示する。
  int arr[3];
  int *p;

  // 配列名そのものが先頭のアドレスを表すので、&が不要。
  p = arr;

  printf("%p\n", p);
  //=> n0x7fff5a9b775c
}
