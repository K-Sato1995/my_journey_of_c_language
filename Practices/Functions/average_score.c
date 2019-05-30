#include <stdio.h>

#define CN 5 // Numbers of scores

int main(void)
{
  double cal_av(int score[]);

  int score[CN] = { 24, 56, 69, 20, 90 };
  printf("The average is %f\n", cal_av(score));
}

double cal_av(int score[])
{
  int total = 0;
  int i;

  for(i = 0; i < CN; i++) {
    total += score[i];
  }
  return (double)total/i;
}
