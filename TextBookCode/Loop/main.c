#include <stdio.h>
#define N 4

int main(void) {
  int arr[N] = { 2, 3, 6, 8 };
  int i = 1;
  int total;

  while(i < N){
    total += arr[i];
    i++;
  }

  printf("Total=%d\n", total); //=> Total=17
}
