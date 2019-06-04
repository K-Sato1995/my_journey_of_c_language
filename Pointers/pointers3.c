#include <stdio.h>

#define N 3

int main() {
  int *p;
  int arr[N] = {10, 20, 30};
  int i;

  p = arr;

  printf("int型は%dバイト\n", sizeof(int));

  for(i=0; i<N; i++, p++){
    printf("*p = %d", *p);
    printf("arr[%d] = %d \n", i, arr[i]);
  }

}
