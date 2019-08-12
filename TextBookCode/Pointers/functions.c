#include <stdio.h>

// 文字列を刺すポインタを返す。
char *get_value(int n);

int main (void) {
  printf("The name is %s\n", get_value(0)); //=> The name is Jack
}

char *get_value(int n) {
  static char *names[] = {"Jack", "John"};

  return names[n];
}
