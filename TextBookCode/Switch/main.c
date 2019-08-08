#include <stdio.h>

int main(void) {
  int n = 4;
  int ans = 1;

  switch(n) {
    case 5:
      ans *= 10;
    case 4:
      ans *= 10;
    case 3:
      ans *= 10;
    case 2:
      ans *= 10;
    case 1:
      ans *= 10;
  }

  printf("10の%d乗は%d\n", n, ans); //=> 10の4乗は10000
}
