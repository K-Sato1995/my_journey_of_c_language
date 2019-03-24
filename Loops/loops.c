#include<stdio.h>

int main(){
  // For Loop + break
  int i;
  for(i = 0; i < 10; i++) {
    // break
    if(i==3){
      break;
    }
    printf("%d回目の処理です\n", i);
  }

  // While Loop + continue
  int n = 0;
  while(n < 5){
    n++;
    if(n % 2 == 1){
      // 奇数ならループ処理の先頭に戻る。
      continue;
    };
    // 偶数ならこの処理が実行される。
    printf("%dは偶数です。\n", n);
  }
  return 0;
}
