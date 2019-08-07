#include <stdio.h>

int main(void) {

  // キャスト演算子は値の型を演算の瞬間だけ変換する。それ以降のプログラムでは持ち越されない。
  int i1 = 5, i2 = 2;
  double x1 = 5.5, x2 = 2.0;

  printf("%d / %d = %d\n", i1, i2, i1/i2); //=> 5 / 2 = 2
  printf("%d / %d = %f\n", i1, i2, (double)i1/i2); //=> 5 / 2 = 2.500000
  printf("%f / %d = %d\n", x1, i2, (int)x1/i2); //=> 5.500000 / 2 = 2

  // 増分・減分演算子
  int data[] = {10, 11, 12};

  int i;

  // 先に++iが行われ手から、data[i]を取り出す。
  i = 0;
  printf("data[i] = %d\n", data[++i]); //=> data[i] = 11

  // 先にdata[i]を取り出してからi++が行われる。
  i = 0;
  printf("data[i] = %d\n", data[i++]); //=> data[i] = 10
}
