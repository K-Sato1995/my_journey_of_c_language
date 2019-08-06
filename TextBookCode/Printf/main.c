#include <stdio.h>

int main(void) {
  int num = 10;
  // %d, %i: 符号付き10進数
  printf("%d, %i\n", num, num); //=> 10 10

  // %u: unsigend int型のデータを符号なし10進数
  printf("%u\n", num); //=>10

  // %o: unsigend int型のデータを符号なし8進数
  printf("%o\n", num); //=> 12

  // %x: unsigend int型のデータを符号なし16進数
  printf("%x\n", num); //=> a

  // %f: double型のデータ10進数
  printf("%f\n", 10.5); //=> 10.500000
}
