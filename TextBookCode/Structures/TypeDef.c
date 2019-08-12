#include <stdio.h>

typedef int LEN;
typedef char GENDER;

typedef struct {
  int age;
  char *name;
} PERSON;

typedef struct {
  int scores[2];
  double ave;
  PERSON person;
}TEST;

int main(void) {
  LEN n = 2;
  GENDER m = 'm';
  PERSON jay = { 25, "Jay" };
  TEST t = { {2, 3}, 5.6, {45, "Jess"} };

  printf("%d, %c, %s, %d\n", n, m , jay.name, jay.age); //=> 2, m, Jay, 25
  printf("%d%d%f\n", t.scores[0],t.scores[1],t.ave); //=> 235.600000
  printf("%s, %d\n", t.person.name, t.person.age); //=> Jess, 45
}
