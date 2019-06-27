#include <stdio.h>
#define N 3

typedef struct Person {
  int age;
  char *name;
}PERSON;

int main(void) {
  PERSON data[N] = {
    {20, "John"},
    {18, "Jack"},
    {29, "Ben"}
  };

  int i;
  printf("AGE | NAME\n");

  for(i=0; i<N; i++){
    printf("%d | %s\n", data[i].age, data[i].name);
  }
}
