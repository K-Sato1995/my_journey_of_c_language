#include<stdio.h>

int main(void) {
  int *p;
  int num = 5;

  p = &num;

  printf("The memory address of num is %p\n", p); //=> The memory address of num is 0x7fff5db1a7c4
  printf("The value of num is %d\n", *p); //=> The value of num is 5


  int *pointer;
  int arr[3] = {10, 20, 30};
  int i;
  pointer = arr;
  printf("The size of int is %lu\n", sizeof(int)); //=> The bite of int is 4

  // 1回目
  for(i=0; i < 3; i++, pointer++) {
    printf("*pointer = %d\n", *pointer);
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  /*
  *pointer = 10
  arr[0] = 10
  *pointer = 20
  arr[1] = 20
  *pointer = 30
  arr[2] = 30
  */

  // 2回目
  for(i=0; i < 3; i++, pointer++) {
    printf("*pointer = %d\n", *pointer);
    printf("arr[%d] = %d\n", i, arr[i]);
  }
  /*
  *pointer = 342229242
  arr[0] = 10
  *pointer = 212322568
  arr[1] = 20
  *pointer = 1541892072
  arr[2] = 30
  */
}
