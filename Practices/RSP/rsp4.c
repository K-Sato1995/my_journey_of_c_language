#include <stdio.h>
/*
 R = 0
 S = 1
 P = 2
*/
int main(void) {
  int const wl[3][3] = {
    {2, 0, 1},
    {1, 2, 0},
    {0, 1, 2}
  };
  char const w[3] = { 'A', 'B', 'D' };

  int a;
  int b;
  int n;

  printf("Player A. Put your move.\n");
  scanf("%d", &a);

  printf("Player B. Put your move.\n");
  scanf("%d", &b);

  n = wl[a][b];

  printf("%c\n", w[n]);
}
