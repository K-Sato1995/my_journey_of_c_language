#include <stdio.h>

// 構造体と関数
typedef struct person3{
  int age;
  char sex;
  char name[15];
} PERSON3;

PERSON3 getInfo(PERSON3 p3);

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
  printf("%d\n", p1.age); //=> 24

  // typedef
  typedef struct person2{
    int age;
    char sex;
    char name[15];
  } PERSON2;

  // typedef 構造体宣言＋初期値設定
  PERSON2 p2 = {30, 'F', "Jack"};

  printf("%d\n", p2.age); //=> 30

  // 構造体と関数
  PERSON3 p3 = {25, 'M', "John"};
  getInfo(p3); //=> I'm 25

  // 構造体へのポインタ
  PERSON3 *p;

  p = &p3;
  printf("Age: %d, Sex:%c, Name: %s\n", p -> age, p -> sex, p -> name); //=> Age: 25, Sex:M, Name: John
}

PERSON3 getInfo(PERSON3 p3) {
  printf("I'm %d\n", p3.age);
};
