#include <stdio.h>

int main(void) {
  char str[] = "Test";
  char des[10];
  int i;

  i = -1;

  do {
    i++;
    des[i] = str[i];
  }while(str[i] != '\0');

  printf("コピーした値: %s\n", des); //=> コピーした値: Test
}
