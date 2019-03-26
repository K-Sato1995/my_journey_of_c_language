#include <stdio.h>

int main(){
  // 構造体の型付け
  struct person {
    int age;
    char sex;
    char name[15];
  };

  // 構造体の宣言
  // 初期値設定
  struct person p1 = {24, 'M', "Tom"};

  // メンバの参照
  printf("%d", p1.age); //=> 24

  // typedef
  typedef struct {
    int age;
    char sex;
    char name[15];
  } person2;

  // typedef 構造体宣言＋初期値設定
  person2 p2 = {30, 'F', "Jack"};

  printf("%d", p2.age); //=> 30
}
