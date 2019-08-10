#include <stdio.h>

int sum(int n);

int main(void) {
  printf("1~5の合計値は%d\n", sum(5));
}

int sum(int n) {
  int result;

  printf("入り口 n = %d\n", n);

  if(n==1) {
    result = 1;
  }else {
    result = sum(n - 1) + n;
  }

  printf("出口 n = %d\n", n);

  return result;
}

/*
入り口 n = 5
入り口 n = 4
入り口 n = 3
入り口 n = 2
入り口 n = 1
出口 n = 1
出口 n = 2
出口 n = 3
出口 n = 4
出口 n = 5
1~5の合計値は15
*/
