#include <stdio.h>

int main(void) {
  unsigned char data;

  data = 0xea;
  printf("0x%02xの下位4ビットは0x%02x\n", data, data & 0x0f); //=> 0xeaの下位4ビットは0x0a

  data = 0x0a;
  printf("0x%02xの上位4ビットに0xe0を付加すると0x%02x\n", data, data | 0xe0); //=>0x0aの上位4ビットに0xe0を付加すると0xea
}
