# include<stdio.h>
/*
 R = 1
 S = 2
 P = 3
*/
int main() {
  int a;
  int b;

  printf("Player A. Put your move.\n");
  scanf("%d", &a);

  printf("Player B. Put your move.\n");
  scanf("%d", &b);

  if(a == b) {
    printf("Draw\n");
  }else if(a == 1 && b == 2) {
    printf("Player1 won\n");
  }else if(a == 1 && b == 3){
    printf("Player2 won\n");
  }else if(a == 2 && b == 1){
    printf("Player1 won\n");
  }else if(a == 2 && b == 3){
    printf("Player2 won\n");
  }else if(a == 3 && b == 1){
    printf("Player1 won\n");
  }else if(a == 3 && b == 2){
    printf("Player2 won\n");
  }else {
    printf("Y'all are cheaters\n");
  }
}
