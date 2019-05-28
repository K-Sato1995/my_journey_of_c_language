#include <stdio.h>

int main(void)
{
  int x, y;
  int diff;

  printf("Put 2 numbers\n");

  scanf("%d%d", &x, &y);

  if (x < y)
  {
    diff = y - x;
  } else
  {
    diff = x - y;
  }

  printf("The diff is %d\n", diff);
}
