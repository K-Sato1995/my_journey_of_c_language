#include<stdio.h>

typedef struct {
  int number;
  char *pname;
}PERSON;

int main(void) {
  PERSON data = { 3, "Rock" };

  // A pointer that can have a memory address of PERSON data.
  PERSON *pointer;

  pointer = &data;

  printf("Address: %d\n", pointer); //=> Address: 1571518368

  /*
  ポインタの指す先のオブジェクトが構造体であるときメンバを指定する為に `->` を使用する。
  */
  printf("number: %d, Initial: %c\n", pointer->number, *pointer->pname); //=> number: 3, Initial: R
}
