#include <stdio.h>

int main() {
  int number = 2;

  // 変数のアドレスを表示(&変数名;)
  printf("%p\n", &number); //=> 0x7fff59f49818

  // Pointerの宣言(int *pointer);
  int * pointer;

  // アドレスを代入
  pointer = &number;
  printf("%d\n", pointer); //=> 0x7fff59f49818

  // ポインタから元の値を参照・変更
  *pointer = 4;
  printf("%d\n", *pointer); //=> 4
  return 0;
}
