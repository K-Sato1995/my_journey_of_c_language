#include<stdio.h>

void inc_x(int*);

int main(void) {
  int x=10, y=20;

  printf("x=%3d  y=%3d\n", x, y);
  inc_x(&x);
  inc_x(&y);
  printf("x=%3d  y=%3d\n", x, y);
  /*
    x= 10  y= 20
    x= 11  y= 21
  */
}


void inc_x(int *px){
  (*px)++;
}
