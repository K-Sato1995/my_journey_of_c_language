# include <stdio.h>

void func(void);

// file scope
int x1 = 0, x2 = 10;

int main(void)
{
  printf("x1 = %d, x2 = %d\n", x1, x2);
  func();
  func();
  func();
  printf("x1 = %d, x2 = %d\n", x1, x2);

  // x1 = 0, x2 = 10
  // 関数内 x = 1 x2 = 31
  // 関数内 x = 2 x2 = 31
  // 関数内 x = 3 x2 = 31
  // x1 = 3, x2 = 10
}


void func(void)
{
  int x2 = 30;

  x1++;
  x2++;

  printf("関数内 x = %d x2 = %d\n", x1, x2);
}
