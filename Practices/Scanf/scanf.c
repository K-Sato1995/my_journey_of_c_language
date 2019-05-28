#include <stdio.h>

int main(void)
{
  int x;

  printf("Put a number\n");

  scanf("%d", &x); // Make the user put a number

  if(x < 0)
  {
    x *= -1;
  }

  printf("Abs is %d\n", x);
}
