# include <stdio.h>

void func(void);

int main(void)
{
  func();
  func();
  func();
  // 静的記憶域期間 sn = 1
  // 自動記憶域期間 sn = 1

  // 静的記憶域期間 sn = 2
  // 自動記憶域期間 sn = 1

  // 静的記憶域期間 sn = 3
  // 自動記憶域期間 sn = 1
}

void func(void)
{
  static int sn = 0;
  auto int an = 0;

  sn++;
  an++;

  printf("静的記憶域期間 sn = %d\n", sn);

  printf("自動記憶域期間 sn = %d\n", an);
}
