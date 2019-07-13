#include <stdio.h>
// 定数 (全て大文字で記述するのが慣習)
#define SEX "MALE"

int main(void) {
  // 出力
  printf("%s\n", SEX);

  // 変数
  int age = 24;
  char *name = "K-Sato";
  printf("name: %s, age: %d\n", name, age);
}
