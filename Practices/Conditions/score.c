# include <stdio.h>

int main(void)
{
  int score;
  char grade;

  printf("Put your score\n");

  scanf("%d", &score);

  if(score > 90)
  {
    grade = 'A';
  }
  else if(score > 80)
  {
    grade = 'B';
  }
  else if(score > 70)
  {
    grade = 'C';
  }
  else
  {
    grade = 'D';
  }

  printf("Your Grade is %c\n", grade);
}
