#include <stdio.h>
// 定数 (全て大文字で記述するのが慣習)
#define NAME "K-Sato"

int main(void) {
  // 出力
  printf("%s\n", NAME);

  // 変数
  int age = 24;
  char *name = "K-Sato";
  printf("name: %s, age: %d\n", name, age);

  // 配列
  int arr[3] = {1, 2, 3};
  int i;
  for(i =0; i < 3; i++) {
    printf("%d", arr[i]);
  }

  // 2次元配列
  int arr2[2][3] = {
    { 1, 2, 3 },
    { 4, 5, 6 }
  };
  for(i =0; i < 2; i++) {
    printf("%d", arr2[i][i]); //=> 1 5
  }
  printf("\n");

  // 文字列
  char str[10] = "Hello";
  printf("%s\n", str);

  // 文字列の配列
  char strArr[2][10] = { "Bye", "World" };
  for(i = 0; i < 2; i++) {
    printf("%s\n", strArr[i]);
  }

  // 入力
  int n;
  char st[20];

  scanf("%d", &n);
  scanf("%s", &st);
  printf("%d\n%s\n", n, st);

}
