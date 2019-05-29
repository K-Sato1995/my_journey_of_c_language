#include <stdio.h>

int main(void) {
  int t;
  int h;

  printf("Hey man! Put 1 or 0\n");
  scanf("%d", &t);
  printf("Hey girl! Put 1 or 0\n");
  scanf("%d", &h);

  if (t == 1 && h == 1){
    printf("Congrats! You guys are in a relationship now.\n");
  }else if(t == 0 && h ==0){
    printf("Wow You guys really don't care about each other at all.\n");
  }else {
    printf("OK, it's not gonna work. You guys should just stay friends\n");
  }
}
