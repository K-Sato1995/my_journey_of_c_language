#include <stdio.h>

void increment(){
  // 普通のローカル変数
  int number = 0;
  number++;
  printf("%d\n", number);
}

void increment2(){
  // static変数
  static int number = 0;
  number++;
  printf("%d\n", number);
}

int main(){
  increment();
  increment();
  increment();
  //=> 1 1

  increment2();
  increment2();
  increment2();
  //=> 1 2 3
}
