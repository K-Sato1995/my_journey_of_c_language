#include<stdio.h>

int main (){
  char str1[] = "John";
  char str2[] = "Jack";
  
  // 第１引数の書式指定文字列に文字列を指定する %s を書き，第２引数以降に表示したい文字列を与えればよい。
  printf("%s and %s", str1, str2);
  return 0;
};
