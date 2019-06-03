#include <stdio.h>

int main(void) {
  int arr[2][2] = {
    {1, 2},
    {3, 4}
  };

  printf("%d\n", arr[0][1]);
  //=> 2
}
