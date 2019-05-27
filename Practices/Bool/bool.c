#include <stdio.h>

#define N 3

int main(void) {
  int data[N] = { 45, 45, 45};
  int i, key = 45;

  i = 3;

  printf("i = %d key=%d, Result:%d\n", i, key, (i < N) && (data[i] == key)); //=> i = 3 key=45, Result:0

  i = 0;
  printf("i = %d key=%d, Result:%d\n", i, key, (i < N) && (data[i] == key)); //=> i = 0 key=45, Result:1
}
