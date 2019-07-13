#include <stdio.h>
#define TRUE 1
#define FALSE 0

void sort(int *p, int n);
int sort1(int *p, int n);
void printData(int *p, int n);
void swap(int *p1, int *p2);

int main() {
  int data[] = {7, 2, 1, 5, 6, 9, 8};
  sort(data, sizeof(data));

  printData(data, sizeof(data));
}


/***************SORT**********************/
void sort(int *p, int n) {
  int i;
  int flg;

  flg = TRUE;
  for(i=n; i > 1 && flg; i--){
    flg = sort1(p, i);
  }
}
/**************1回分のソートを行う**********/
int sort1(int *p, int n){
  // p データの先頭
  // n 対象となっているデータの個数
  int i;
  int flg = FALSE;

  for(i = 0; i < n-1; i++, p++){
    if(*p > *(p+1)) {
      swap(p, p+1);
      flg = TRUE;
    }
  }

  return flg;
}


/****************SWAP********************/
void swap(int *p1, int *p2) {
  int temp;

  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

/********PRINT ARRAY DATA**********/
void printData(int *p, int n) {
  int i;
  for(i = 0; i < n; i++) {
    printf("%d", *p);
  }
  printf("/n");
}
