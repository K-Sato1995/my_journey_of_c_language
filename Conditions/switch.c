#include <stdio.h>

int main(void)
{
  int n;
  int ans;

  printf("乗数を入力\n");
  scanf("%d", &n);

  ans = 1;

  switch(n)
  {
    // 条件に当てはまる式から順に全てが評価される。
    // 5の場合は以下全てが実行され、5回かけられ,最後に1が足されるから10001になる。
    // break;をつける事で、後続の評価をしないよう設定できる。
    case 5:
      ans *= 10;
    case 4:
      ans *= 10;
    case 3:
      ans *= 10;
    case 2:
      ans *= 10;
    case 1:
      ans *= 10;
    default:
      ans += 1;
  }

  printf("10の%d乗は%d\n", n, ans);
}
