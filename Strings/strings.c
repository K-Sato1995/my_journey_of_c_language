#include<stdio.h>

int main (){
  char str1[] = "John";
  char str2[] = "Jack";

  // 第１引数の書式指定文字列に文字列を指定する %s を書き，第２引数以降に表示したい文字列を与えればよい。
  printf("%s and %s\n", str1, str2);

  // String length
  printf("%lu\n", strlen(str1));

  // String Comparison
  if (str1 == str2){
    printf("They are the same person\n");
  }else{
    printf("They are different people\n");
  };
  return 0;
};
