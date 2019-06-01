# include <stdio.h>

int sum(int n);

int main(void){
  printf("１から５までの合計は%d\n", sum(5));
}

int sum(int n) {
  int result;

  printf("入り口 n = %d\n", n);

  if(n == 1){
    result = 1; // 1の場合は抜ける。
  }else {
    result = sum(n - 1) + n; // sum(4) + 5 はsum(5)と等しいという考え方。
  }

  printf("出口 n = %d\n, result = %d\n", n, result);

  return result;
}
