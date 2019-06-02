#include <stdio.h>
/*
 R = 0
 S = 1
 P = 2
*/

int rsp(int a, int b);

int main(void){
  int a;
  int b;

  printf("Player A. Put your move.\n");
  scanf("%d", &a);

  printf("Player B. Put your move.\n");
  scanf("%d", &b);

  rsp(a, b);
}

int rsp(int a, int b){
  int n;

  if(a == b) {
    printf("Draw\n");
    return 0;
  }

  n = (a + 1) % 3;

  if(n == b){
    printf("Player1 Won\n");
    return 0;
  }else {
    printf("Player2 Won\n");
    return 0;
  }
}
