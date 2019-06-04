# include <stdio.h>

void inc_x(int *);

int main() {
  int x=10, y=20;

  printf("x=%3d y=%3d\n", x,y);
  //=> x= 10 y= 20
  inc_x(&x);
  inc_x(&y);
  printf("increment\n");
  printf("x=%3d y=%3d\n", x,y);
  //=> x= 11 y= 21
}

void inc_x(int *px) {
  (*px)++;
}
